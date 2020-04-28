#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(char i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

char pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

// stack_overflow: Prints a "Stack overflow" message and terminates immediately.
void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

//stack_underflow: prints out a "Parenthese/braces are not nested properly" message and then returns;
void stack_underflow(void)
{
	printf("Parentheses/braces are not nested properly\n");
	return;
}

int main(void)
{
	char c; popped_brace;

	printf("Enter parentheses and/or braces: ");
	while ((c = getchar()) != '\n')
	{
		switch(c)
		{
			case '(': case '[': case '{': push(c); break;
			case ')': case ']': case '}': popped_brace = pop();
						      if (popped_brace != c)
							      printf("The parenthese/braces are not nested properly"); exit(EXIT_FAILURE); break;
		}
	}

	if (top == 0)
		printf("The parenthese/braces are nested properly\n");
	else
		printf("The parentheses/braces are not nested properly\n");

	return 0;

}
