#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"

bool empty(struct stack *s)
{
		return (s->top < 0);
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

char stacktop(struct stack *s)
{
		if (empty(s))
				exit(1);

		return s->st[s->top];
}


