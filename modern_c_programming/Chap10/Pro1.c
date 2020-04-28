#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

/* prototypes */
void stack_underflow(void);
void stack_overflow(void);

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

//stack_overflow: print "Stack overflow" and exit
void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

//stack_underflow: This can only happen in case of more closing brackets than opening brackets, so it shall print "Parenthese/braces are not nested properly", and exit()
void stack_underflow(void)
{
	printf("Parentheses/braces are not nested properly (i) \n");
	exit(EXIT_FAILURE);
}

int main(void)
{
	char c, popped_brace;

	printf("Enter parentheses and/or braces: ");

	while ((c = getchar()) != '\n')
		switch(c)
		{
			case '(': case '[': case '{': push(c); break;
			case ')': case ']': case '}': popped_brace = pop();
						      if ((popped_brace+1) != c && (popped_brace+2) != c)
						      {
							      printf("Parenthese/braces are not nested properly (ii)\n");
							      exit(EXIT_FAILURE);
						      }
		}

	if (top == 0)
		printf("Parenthese/braces are nested properly\n");
	else
		printf("Parenthese/braces are not nested properly (iii)\n");

	return 0;
}
