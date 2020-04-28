#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STACKSIZE 100

struct stack {
		int top;
		char *st[STACKSIZE];
};

int empty(struct stack *s)
{
		return (s->top < 0);
}

void push (struct stack *s, char *c)
{
		if (s->top >= STACKSIZE)
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


char * enclose(char *str1, char op, char *str2)
{
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		char *str = malloc(sizeof(len1+len2+6));
		int i;

		str[0] = '(';
		for (i = 0; i < len1; i++)
				str[i + 1] = str1[i];

		str[++i] = ' ';
		str[++i] = op;
		str[++i] = ' ';

		for (int j = 0; j < len2; j++)
				str[++i] = str2[j];
		str[++i] = ')';
		str[++i] = '\0';

		return str;
}

char isoperand(char c)
{
		return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
		

void eval(char expr[])
{
		int position;
		char c;
		struct stack st;

		st.top = -1;
		
		printf("\nThe postfix expression is: %s\n\n", expr);

		for (position = 0; ((c = expr[position]) != '\0'); position++){
				if (isoperand(c)){
						char *op = malloc(2*sizeof(char));
						op[0] = c;
						op[1] = '\0';
						push(&st, op);
				}
				else{
						char *str2 = pop(&st);
						char *str1 = pop(&st);
						push(&st, enclose(str1, c, str2));
				}
		}

		printf("The corresponding infix expression is: %s\n\n\n", pop(&st));
		return;
}

int main(void)
{
	char str[100];
	scanf("%s", str);
	eval(str);

	return 0;
}


