#include <stdlib.h>
#include <stdio.h>
#include <color.h>
#include <ctype.h>

#include "stack.h"

char *inst(char c)
{
		switch(c){
				case '+': return "AD";
				case '-': return "SB";
				case '*': return "ML";
				case '/': return "DV";
		}

		return 0;
}

int main(void)
{
		struct stack *s = malloc (sizeof(struct stack) * sizeof(char));
		s->top = -1;

		int var = 0;
		bool first_turn = true;
		char expr[STACKSIZE], c;
		scanf("%s", expr);

		for (int i = 0; (c = expr[i]) != '\0'; i++){
				if (isalpha(c))
						push(s, c);
				else {
						if (first_turn){
							char second = pop(s);
							char first = pop(s);
							printf(RED "LD\t" GREEN "%c\n", first);
							printf(RED "%s\t" GREEN "%c\n", inst(c), second);
							printf(RED "ST\t" GREEN "TEMP%d\n", ++var);
							first_turn = false;
						}
						else{
								if (empty(s)){
										printf(RED "LD\t" GREEN "TEMP%d\n", var-1);
										printf(RED "%s\t" GREEN "TEMP%d\n", inst(c), var);
										printf(RED "ST\t" GREEN "TEMP%d\n", ++var);
								}
								else {
										char first = pop(s);

										if(empty(s)){
												printf(RED "LD\t" GREEN "%c\n", first);
												printf(RED "%s\t" GREEN "TEMP%d\n", inst(c), var);
												printf(RED "ST\t" GREEN "TEMP%d\n", ++var);
										}
										else {
												char second = pop(s);
												printf(RED "LD\t" GREEN "%c\n", second);
												printf(RED "%s\t" GREEN "%c\n", inst(c), first);
												printf(RED "ST\t" GREEN "TEMP%d\n", ++var);
										}
								}
						}
				}
				printf(COLOR_RESET);

		}

		return 0;
}
