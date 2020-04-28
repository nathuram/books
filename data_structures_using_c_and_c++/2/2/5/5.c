/* Every stack element is a varying number of integers, so each can be an array of integers OR every element is an array of integers, but this would take up too much memory */

#include <stdio.h>
#include <stdlib.h>

#define STACKSIZE 100

struct stack {
		int top;
		int *s[STACKSIZE];   /* An array of pointer to integers. Each element is an array of integers. The first element of the array stores the length of the array */
};

void push(struct stack *ps, int *arr)
{
		if (s->top == STACKSIZE - 1){
				printf("overflow\n");
				exit(1);
		}
		ps->s[++(ps->top)] = arr;
		return ;
}

int * pop(struct stack *ps)
{
		if (s->top < 0){
				printf("underflow\n");
				exit(1);
		}
		return ps->s[(ps->top)--];
}




