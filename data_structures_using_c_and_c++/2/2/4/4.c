#include <stdio.h>
#include <stdlib.h>

#define STACKSIZE 100

struct stack {
		int s[STACKSIZE];
};

void stackinit(struct stack *ps)
{
		ps->s[0] = 0;
		return;
}

void push(struct stack *ps, int x)
{
		int n = ps->s[0];
		if (n == STACKSIZE - 1){
				printf("overflow\n");
				exit(1);
		}
		ps->s[++(ps->s[0])] = x;
		return;
}

int pop(struct stack *ps)
{
		int n = ps->s[0];
		if (n == 0){
				printf("underflow\n");
				exit(1);
		}
		return ps->s[(ps->s[0])--];
}

int empty(struct stack *ps)
{
		if (ps->s[0] == 0)
				return 1;
		else
				return 0;
}

void popandtest(struct stack *ps, int *px, int *pund)
{
		if (empty(ps)){
				*pund = true;
				return;
		}

		*pund = false;
		*px = ps->s[(ps->s[0])--];
		return;
}

void pushandtest(struct stack *ps, int px, int *povr)
{
		if (ps->s[0] == STACKSIZE){
				*povr = true;
				return;
		}

		*povr = false;
		ps->s[++(ps->s[0])] = px;
		return;
}

int stacktop(struct stack *ps)
{
		if (empty(ps)){
				printf("stack empty\n");
				exit(1);
		}
		else
				return(ps->s[ps->s[0]]);
}



