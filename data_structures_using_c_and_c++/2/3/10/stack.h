#ifndef STACK
#define STACK

#include <stdbool.h>
#define STACKSIZE 100

struct stack {
		int top;
		char st[STACKSIZE];
};

bool empty(struct stack *s);
char stacktop(struct stack *s);
void push(struct stack *s, char c);
char pop(struct stack *s);

#endif

