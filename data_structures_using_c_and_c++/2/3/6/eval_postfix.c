#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <color.h>

#define STACKSIZE 100



struct stack {
		int top;
		char arr[STACKSIZE];
};

bool empty(struct stack *st)
{
		return (st->top < 0);
}

void push(struct stack *st, char n)
{
		if (st->top >= STACKSIZE)
				exit(1);
	
		st->arr[++(st->top)] = n;
		return;
}

char pop(struct stack *st)
{
		if (empty(st))
				exit(1);

		return st->arr[(st->top)--];
}

bool isoperand(int n)
{
		return ((n - '0' >= 0) && (n - '0' <= 9));
}

char stktop(struct stack *st)
{
		return st->arr[st->top];
}

int op(int a, int b, char c)
{
		switch(c) {
				case '+' : return a + b;
				case '-' : return a - b;
				case '*' : return a * b;
				case '/' : return a / b;
				case '^' : return pow(a, b);
		}
}



bool prcd(char a, char b)
{
		switch (a) {
				case '(' : switch (b) {
								   default : return false;
						   }

				case '^' : switch (b) {
								   case '/': case '*': case '+': case '-': case ')' : return true;
								   default : return false;
						   }
				case '+' : switch(b) {
								   case '+': case '-': case ')': return true;
								   default: return false;
						   }
				case '-' : switch (b) {
								   case '-': case ')' : return true;
								   default: return false;
						   }
				case '*' : switch (b) {
								   case '*': case '+': case '-': case ')': return true;
								   default : return false;
						   }
				case '/' : switch (b) {
								   case '/': case '*': case '+': case '-': case ')': return true;
								   default: return false;
						   }
		}
}

void pop_push(struct stack *s_oprtr, struct stack *s_oprnd)
{
		char oprtr = pop(s_oprtr);
		int b = pop(s_oprnd);
		int a = pop(s_oprnd);
		printf("Performing operation: " CYAN "%d %c %d\n" COLOR_RESET, a, oprtr, b);
		push(s_oprnd, op(a, b, oprtr));
		return;
}

void printstate(struct stack *s_oprtr, struct stack *s_oprnd)
{
		printf("The current state of the operator stack is: ");
		for (int i = 0; i <= s_oprtr->top; i++)
				printf(GREEN "%c:", s_oprtr->arr[i]);
		printf(COLOR_RESET"\n");

		printf("The current state of the operand stack is: ");
		for (int i = 0; i <= s_oprnd->top; i++)
				printf(BLUE "%d:", s_oprnd->arr[i]);
		printf(COLOR_RESET "\n\n");
		
		return;
}
void postf_eval(char expr[])
{
		char c;
		int position;
		struct stack s_oprtr, s_oprnd;
		s_oprtr.top = -1;
		s_oprnd.top = -1;

		printf("The expression is:" RED " %s\n\n" COLOR_RESET, expr);

		for (position = 0; ((c = expr[position]) != '\0'); position++){
				if (isoperand(c)){
						printf("Pushing operand: " BLUE "%d\n" COLOR_RESET, c - '0');
						push(&s_oprnd, c - '0');
						printstate(&s_oprtr, &s_oprnd);
				}
				else{	
						if (empty(&s_oprtr)){
							printf("Pushing operator: "GREEN " %c\n" COLOR_RESET, c);
							push(&s_oprtr, c);
							printstate(&s_oprtr, &s_oprnd);
							continue;
						}
				
						while (prcd(stktop(&s_oprtr), c)){
								pop_push(&s_oprtr, &s_oprnd);
								printstate(&s_oprtr, &s_oprnd);
						}
						if (c != ')'){
								printf("Pushing operand: " BLUE "%c\n" COLOR_RESET);
								push(&s_oprtr, c);
								printstate(&s_oprtr, &s_oprnd);
						}
						else {
								printf("Reached a ) with a ( at stacktop, popping\n");
								pop(&s_oprtr); /* We only reach (and thus execute) this conditional when stktop = ( and c = ) */
								printstate(&s_oprtr, &s_oprnd);
						}
				}
		}

		while (empty(&s_oprtr) == false){
				pop_push(&s_oprtr, &s_oprnd);
				printstate(&s_oprtr, &s_oprnd);
		}
		printf("The evaluated expression is " CYAN "%d\n" COLOR_RESET, pop(&s_oprnd));
}

int main(void)
{
		char expr[100];
		scanf("%s", expr);

		postf_eval(expr);
		return 0;
}
				
												




		

