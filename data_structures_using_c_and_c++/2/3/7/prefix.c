#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <color.h>

#define STACKSIZE 100

struct stack {
		int top;
		char st[STACKSIZE];
};

int empty(struct stack *s)
{
		return (s->top < 0);
}

char stacktop(struct stack *s)
{
		return s->st[s->top];
}

void push (struct stack *s, char c)
{
		if (s->top >= STACKSIZE - 1)
				exit(1);

		s->st[++(s->top)] = c;
		return;
}

char pop(struct stack *s)
{
		if (empty(s))
				exit(1);
		return s->st[(s->top)--];
}

char isoperand(char c)
{
		return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

bool prcd(char a, char b)
{
		switch (a) {
				case ')' : switch (b) {
								   default : return false;
						   }

				case '^' : switch (b) {
								   case '^': case '/': case '*': case '+': case '-': case '(' : return true;
								   default : return false;
						   }
				case '+' : switch(b) {
								   case '-': case '(': return true;
								   default: return false;
						   }
				case '-' : switch (b) {
								   case '(' : return true;
								   default: return false;
						   }
				case '*' : switch (b) {
								   case '+': case '-': case '(': return true;
								   default : return false;
						   }
				case '/' : switch (b) {
								   case '*': case '+': case '-': case '(': return true;
								   default: return false;
						   }
		}
}

void prefix(char expr[])
{
		int len = strlen(expr);

		struct stack oprtr;
		struct stack* op = &oprtr;
		oprtr.top = -1;

		char res_str[len+1];

		int pos = 0;
		char c;
		for (int i = len - 1; i >= 0; i--){
				c = expr[i];
				if (isoperand(c))
						res_str[pos++] = c;
				else{
						if (empty(op)){
								push(op, c);
								continue;
						}

						while (empty(op) == 0 && prcd(stacktop(op), c))
								res_str[pos++] = pop(op);

						if (c == '(')
								pop(op);
						else
								push(op, c);
				}
		}
		
		while (empty(op) == 0)
				res_str[pos++] = pop(op);

		printf("The infix string is: " RED "%s\n\n" COLOR_RESET, expr);
		printf("The prefix string is: " GREEN); 
		for (int i = pos-1; i >= 0; i--)
				printf("%c", res_str[i]);
		printf(COLOR_RESET "\n");

		return;
}

int main(void)
{
		char expr[STACKSIZE];
		scanf("%s", expr);

		prefix(expr);
		return 0;
}

						




