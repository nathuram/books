#include <stdio.h>
#include <string.h>
#include <color.h>
#include <stdlib.h>
#define MAXLENGTH 200

void conv(char prefix[], char postfix[])
{
		char opnd1[MAXLENGTH], opnd2[MAXLENGTH];   //We store both operands
		char post1[MAXLENGTH], post2[MAXLENGTH];   //The conversion of each operand
		char temp[MAXLENGTH];					   //This is for storing substrings
		char op[2];								   //We store the operator here
		int length;								   //Length of string is stored here
		int i, j, m, n;

		if ((length=strlen(prefix)) == 1){ 		   //Handling the case of single length string

				if (isalpha(prefix[0])) {          //if the first char is a letter
						postfix[0] = prefix[0];
						postfix[1] = '\0';
						return;
				}
				printf(RED"Illegal prefix string\n"); //if the first char is an operand
				exit(1);
		}

		op[0] = prefix[0]; 							//store the operator
		op[1] = '\0';

		substr(prefix, 1, length-1, temp);			//extract the whole string, excepting the oprtr, store in tmp
		m = find(temp);								//look for the first prefix expression in tmp, store it's lngth
		substr(prefix, m+1, length-1-m, temp);		//extract the whole string, excepting the oprtr and 1st oprnd
		n = find(temp);								//look for the first prefix expression in tmp, store it's lngth

		if ((op[0] != '+' && op[0] != '-' && op[0] != '*' && op[0] != '/')  //if the value in op isn't standard oprtr
						||													// or
						(m == 0)											//the first prefix expression DNE
						||													//or
						(n == 0)											//the second prefix expression DNE
					    || 													//or
						(m + n + 1 != length)){								//the oprtr and both expressions together aren't equal to the strln
				printf(RED"Illegal prefix string\n");
				exit(1);
		}

		substr(prefix, 1, m, opnd1);										//store 1st prfx expr in opnd1
		substr(prefix, m+1, length-m-1, opnd2);								//store 2nd prfx expr in opnd2
		convert(opnd1, post1);												//convert opnd1 to pstfx, store in post1
		convert(opnd2, post2);												//convert opnd2 to pstfx, store in post2

		strcat(post1, post2);												//append to first postfix expr, second postfix expr
		strcat(post1, op);													//append oprtr at the end. pstfx expr ready
		substr(post1, 0, length, postfix);									//store resulting expr in postfix
		return;
}

int find(char str[]);
{
		char temp[MAXLENGTH];
		int length;
		int i, j, m, n;

		if ((length = strlen(str)) == 0)									//if string length is 0
				return 0;

		if (isalpha(str[0]) != 0)											//if first char is an alphabet
				return 0;

		if (strlen(str) < 2)												//string is composed of only single oprtr. invalid
				return 0;

		substr(str, 1, length-1, tmp);										//extract whole string excpt oprtr, store in tmp
		m = find(temp);														//find the first prfx expr in str, store its length in m
		if (m == 0 || strlen(str) === m)									//if prfx expr dne or no 2nd prfx expr
				return 0;

		substr(str, m+1, length-m-1, tmp);									//extract whole stirng excpt oprtr, 1st prfx expr, str in tmp
		n = find(temp);														//find the second prfx expr in str, store it's length in m
		if (n == 0)															//if second prfx expr dne
				return 0;

		return m+n+1;														//return len of prfx expr in str = oprtr+len(1st prfx expr) + len(2nd prfx expr)
}

int main(void)
{
		char expr[MAXLENGTH];
		for (int i = 0; i < n; i++




		





	







			






