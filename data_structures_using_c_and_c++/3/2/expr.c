#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAXSTRINGSIZE 100

void readstr(char *, int *);
int expr(char *, int, int *);
int term(char *, int, int *);
int getsymb(char *, int, int *);
int factor(char *, int, int *);

void readstr(char * str, int *length)
{
		scanf("%s", str);
		*length = strlen(str);

		return;
}


int getsymb(char str[], int length, int *ppos)
{
		char c;
		if (*ppos < length)
				c = str[*ppos];
		else
				c = ' ';
		(*ppos)++;
		return(c);
}

int main(void)
{
		char str[MAXSTRINGSIZE];
		int length, pos;

		readstr(str, &length);
		pos = 0;
		if (expr(str, length, &pos) == TRUE && pos >= length)
				printf("valid\n");
		else
				printf("invalid\n"); // this can occur if there is no expr in the string, or if there is one at ppos, but it doesn't occupy the whole string

		return 0;
}

int expr(char str[], int length, int *ppos)
{	
		// an expression is...
		if (term(str, length, ppos) == FALSE) //...a term ...
				return FALSE;

		if (getsymb(str, length, ppos) != '+'){ //... alone or followed by an addition symbol followed by ...
				(*ppos)--;
				return TRUE;
		}

		return (term(str, length, ppos)); //...another term 
}

int term(char str[], int length, int *ppos)
{
		// a term is...
		if (factor(str, length, ppos) == FALSE) // a factor...
				return FALSE;

		if (getsymb(str, length, ppos) != '*') { //... alone or followed by a '*' followed by...
				(*ppos)--;
				return TRUE;
		}

		return factor(str, length, ppos); // ...another factor
}

int factor(char str[], int length, int *ppos)
{
		int c;
		if ((c = getsymb(str, length, ppos)) != '(')
				return (isalpha(c));
		return (expr(str, length,ppos) && getsymb(str, length, ppos) == ')');
}




















						




