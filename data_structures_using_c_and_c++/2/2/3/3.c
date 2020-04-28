#include <stdio.h>
#include <stdlib.h>

#define STACKSIZE 100

struct stack {
		int top;
		char arr[STACKSIZE];
};

void push(struct stack *ps, char x)
{
		if (ps->top == STACKSIZE - 1){
				printf("overflow\n");
				exit(1);
		}
		ps->arr[++(ps->top)] = x;
		return;
}

char pop(struct stack *ps)
{

		if (ps->top < 0){
				printf("underflow\n");
				exit(1);
		}
		return ps->arr[(ps->top)--];
}

int empty(struct stack *ps)
{
	if (ps->top < 0)
			return 1;
	else
			return 0;
}

char stacktop(struct stack *ps)
{
		if (empty(ps)){
				printf("is empty\n");
				exit(1);
		}
		return ps->arr[ps->top];
}

void stackinit(struct stack *ps)
{
		ps->top = -1;
		return;
}



void rev1(void)
{
		struct stack ps;
		stackinit(&ps);

		printf("Enter string:  ");

		char c;
		scanf("%c", &c);

		while(c != 'C'){
				push(&ps, c);
				scanf("%c ", &c);
		}

		scanf("%c", &c);
		while(c != '\n'){
				if (c != pop(&ps)){
						printf("invalid string\n");
						return;
				}
				scanf("%c", &c);
		}

		printf("valid string\n");
		return;
}

void rev2(void)
{
		struct stack ps;
		stackinit(&ps);

		int inp = 1;
		char x;
		printf("Enter string:  ");

		while ((x = getchar()) != '\n'){
				if (x == 'D'){
						inp = 1 - inp;
						continue;
				}

				if (inp == 1)
						push(&ps, x);
				else
						if (x != pop(&ps)){
								printf("invalid string\n");
								return;
						}
		}
		
		printf("valid string\n");
		return;
}

int main(void)
{
		rev1();
		rev2();

		return 0;
}


				


