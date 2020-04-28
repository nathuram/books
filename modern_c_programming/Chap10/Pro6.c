#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

/* prototypes */
void stack_overflow();
void stack_underflow();

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

void push(int i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

// stack_overflow: Prints a "Stack overflow" message and terminates immediately.
void stack_overflow(void)
{
//	for (int i = 0; i < STACK_SIZE; i++)
		//printf(" contents[%d] = %d", i, contents[i]);
//	printf("\n");
	printf("Expression is too complicated\n");
	exit(EXIT_FAILURE);
}

//stack_underflow: prints out a "Parenthese/braces are not nested properly" message and then returns;
void stack_underflow(void)
{
	printf("Not enough operands in expression\n");
	exit(EXIT_FAILURE);
}

int main(void)
{
	make_empty();
	char ch;
	int oper1, oper2;

	printf("Enter an RPN expression: ");

	do 
	{
		scanf(" %c", &ch);

		switch(ch)
		{
			case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': case '0':
				push(ch - '0'); break;
			case '+':
				oper1 = pop();
				oper2 = pop();
				push(oper2 + oper1);
				break;
			case '-':
				oper1 = pop();
				oper2 = pop();
				push(oper2 - oper1);
				break;
			case '/':
				oper1 = pop();
				oper2 = pop();
				push(oper2/oper1);
				break;
			case '*':
				oper1=pop();
				oper2 = pop();
				push(oper2 * oper1);
				break;
			case '=':
				printf("Value of expression: %d\n", pop());
				return 0;
				break;
		}
	} while (ch != '\n');
}
