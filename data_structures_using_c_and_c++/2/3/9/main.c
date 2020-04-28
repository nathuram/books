#include <stdio.h>
#include <color.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"
#include "prefix.h"
#include "reduce.h"

void print(char *str)
{
		for (int i = 0; str[i] != '\0'; i++){
				if (str[i] != '&')
						printf("%c", str[i]);
		}
		printf("\n");
		return;
}

/* Returns position of right parenthesis */
int r_paren_pos(char *str, int pos)
{
		struct stack s;
		s.top = -1;

		push(&s, str[pos]);
		int i;
		for (i = pos+1; str[i] != '\0'; i++){
				if (str[i] == '(')
						push(&s, str[i]);

				if (str[i] == ')'){
						pop(&s);
						if (empty(&s))
								break;
				}
		}

		return i;
}

int main(void)
{
		char expr[STACKSIZE];
		scanf("%s", expr);

		printf("The original expression is: " RED "%s\n" COLOR_RESET, expr);
		
		for (int i = 0; expr[i] != '\0'; i++){
				if (expr[i] == '('){
						int left_paren = i;
						int right_paren = r_paren_pos(expr, i);
						char *redu_str = reduce(expr, left_paren, right_paren);
						
						if (strcmp(prefix(expr), prefix(redu_str)) == 0){
								expr[left_paren] = '&';
								expr[right_paren] = '&';
						}

				}
		}
		
		printf("The expression with superfluous brackets removed is " GREEN);
		print(expr);
		printf(COLOR_RESET "\n");

		return 0;
}

