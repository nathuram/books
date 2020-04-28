#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

bool empty(struct stack *s)
{
		return (s->top < 0);
}

char stackstop(struct stack *s)
{
		return s->st[s->top];
}

void push(struct stack *s, char c)
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

