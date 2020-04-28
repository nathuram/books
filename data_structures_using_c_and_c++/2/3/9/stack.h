#ifndef STACK
#define STACK

#include <stdbool.h>

#define STACKSIZE 100

struct stack {
		int top;
		char st[STACKSIZE];
};

void push(struct stack *, char c);
char pop(struct stack *);
bool empty(struct stack *);
char stacktop(struct stack *);

#endif

