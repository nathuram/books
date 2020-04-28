#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <color.h>
#include <string.h>
#include "stack.h"

#define STACKSIZE 100

char isoperand(char c)
{
		return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

bool prcd(char a, char b)
{
		switch (a) {
				case ')' : switch (b) {
								   default : return false;
						   }

				case '^' : switch (b) {
								   case '^': case '/': case '*': case '+': case '-': case '(' : return true;
								   default : return false;
						   }
				case '+' : switch(b) {
								   case '-': case '(': return true;
								   default: return false;
						   }
				case '-' : switch (b) {
								   case '(' : return true;
								   default: return false;
						   }
				case '*' : switch (b) {
								   case '+': case '-': case '(': return true;
								   default : return false;
						   }
				case '/' : switch (b) {
								   case '*': case '+': case '-': case '(': return true;
								   default: return false;
						   }
		}
		return 0;
}

char * prefix(char expr[])
{
		int len = strlen(expr);

		struct stack oprtr;
		struct stack* op = &oprtr;
		oprtr.top = -1;

		char res_str[len+1];

		int pos = 0;
		char c;
		for (int i = len - 1; i >= 0; i--){
				c = expr[i];
				if (isoperand(c))
						res_str[pos++] = c;
				else{
						if (empty(op)){
								push(op, c);
								continue;
						}

						while (empty(op) == 0 && prcd(stacktop(op), c))
								res_str[pos++] = pop(op);

						if (c == '(')
								pop(op);
						else
								push(op, c);
				}
		}
		
		while (empty(op) == 0)
				res_str[pos++] = pop(op);
		
		char * result = malloc(sizeof(char) * pos);
		
		int position = 0;
		for (int i = pos-1; i >= 0; i--)
				result[position++] = res_str[i];
		result[position] = '\0';

		return result;
}

