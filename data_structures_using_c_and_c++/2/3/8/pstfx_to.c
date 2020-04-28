#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <color.h>

#define STACKSIZE 100

struct stack {
		int top;
		char *st[STACKSIZE];
};

bool empty(struct stack *s)
{
		return (s->top < 0);
}

void push(struct stack *s, char *c)
{
		if (s->top >= STACKSIZE - 1)
				exit(1);

		s->st[++(s->top)] = c;
		return;
}

char *pop(struct stack *s)
{
		if (empty(s))
				exit(1);

		return s->st[(s->top)--];
}


bool isoperand(char c) 
{
		return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

void enclose(char *dest, char *str1, char op, char *str2)
{
		int position = 0;

		dest[position++] = '(';
		for (int i = 0; i < strlen(str1); i++)
				dest[position++] = str1[i];

		dest[position++] = ' ';
		dest[position++] = op;
		dest[position++] = ' ';

		for (int i = 0; i < strlen(str2); i++)
				dest[position++] = str2[i];
		dest[position++] = ')';
		dest[position++] = '\0';


		return;
}

void infix(char expr[])
{
		char c;
		struct stack ifix;
		ifix.top = -1;
	
		for (int position = 0; expr[position] != '\0'; position++){
				c = expr[position];
				if (isoperand(c)){
						char *i_str = malloc(sizeof(char) * 2);
						i_str[0] = c;
						i_str[1] = '\0';
						push(&ifix, i_str);
				}
				else{
						char *if2 = pop(&ifix);
						char *if1 = pop(&ifix);
						char *i_str = malloc(sizeof(char) * (strlen(if1) + strlen(if2) + 6));
						enclose(i_str, if1, c, if2);

						push(&ifix, i_str);
				}
		}

		printf("The infix expression is: " GREEN "%s\n" COLOR_RESET, pop(&ifix));
		return;
}

void prefix(char expr[])
{
		char c;
		struct stack prfx;
		prfx.top = -1;

		for (int position = 0; expr[position] != '\0'; position++){
				c = expr[position];
				if (isoperand(c)){
						char *p_str = malloc(sizeof(char) * 2);
						p_str[0] = c;
						p_str[1] = '\0';
						push(&prfx, p_str);
				}
				else{
						char *pf2 = pop(&prfx);
						char *pf1 = pop(&prfx);
						char *p_str = malloc(sizeof(char) * (strlen(pf1) + strlen(pf2) + 2));

						int pos = 0;
						p_str[pos++] = c;
						for (int i = 0; i < strlen(pf1); i++)
								p_str[pos++] = pf1[i];

						for (int i = 0; i < strlen(pf2); i++)
								p_str[pos++] = pf2[i];

						p_str[pos++] = '\0';
						push(&prfx, p_str);
				}
		}

		printf("The prefix expression is " CYAN "%s\n\n" COLOR_RESET, pop(&prfx));
		return;
}

int main(void)
{
		char expr[STACKSIZE];
		scanf("%s", expr);

		printf("The postfix expression is: " RED "%s\n\n" COLOR_RESET, expr);
		infix(expr);
		prefix(expr);

		return 0;
}


