#include <stdio.h>
#include <ctype.h>
#include <color.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 100

void substr(char str1[], char str2[], int m, int n)
{
		int x = 0, i = m;
		while (i <= n)
				str2[x++] = str1[i++];
		str2[x] = '\0';

		return;
}

int find(char str[])
{
		char temp[MAXLEN];
		int length;

		if ((length = strlen(str)) == 0)
				return 0;

		if (isalpha(str[0]))
						return 1;

		substr(str, temp, 1, length - 1);
		int m = find(temp);
		if (m == 0)
				return 0;

		substr(str, temp, m+1, length-1);
		int n = find(temp);
		if (n == 0)
				return 0;

		return m+n+1;
}

void printtabs(int n)
{
	for (int i = 0; i < n; i++)
		printf("  ");
	return;
}

void convert(char prefix[], char postfix[], int tnum)
{
	char opnd1[MAXLEN], opnd2[MAXLEN];
	char post1[MAXLEN], post2[MAXLEN];
	char temp[MAXLEN];
	char op[1];
	int length;
	int m, n;
	
	
	printf("Our string: "RED "%s\n" COLOR_RESET, prefix);
	if ((length = strlen(prefix)) == 1 && isalpha(prefix[0])){
		postfix[0] = prefix[0];
		postfix[1] = '\0';
		return;
		}

	op[0] = prefix[0];
	op[1] = '\0';
	
	substr(prefix, temp, 1, length-1);
	m = find(temp);
	substr(prefix, temp, m+1, length-1);
	n = find(temp);
	printf(RED "m is %d " BLUE "n is %d\n" COLOR_RESET, m, n);

	if (m == 0 || n == 0 || m+n+1 != length || isalpha(prefix[0]) ){
		printf("Illegal String\n");
		exit(1);
	}

	substr(prefix, opnd1, 1, m);
	substr(prefix, opnd2, m+1, length-1);
	
	
	convert(opnd1, post1, tnum+1);
	convert(opnd2, post2, tnum+1);
	
	strcat(post1, post2);
	strcat(post1, op);
	substr(post1, postfix, 0, length-1);
	return ;
}

int main(void)
{

		/*
		while (str[0] != 'x'){
			printf(BLUE "%s:\t\t" GREEN "%d\n", str, find(str));
			scanf("%s ", str);
		}
		*/

		//Driver code
		char str1[MAXLEN], str2[MAXLEN];
		scanf("%s ", str1);
		while (str1[0] != 'x'){
			convert(str1, str2, 0);
			printf(WHITE "The prefix expression was: " BLUE "%s\n", str1);
			printf(WHITE "The postfix expression is: " GREEN "%s\n", str2);
			scanf("%s ", str1);
		}
		return 0;
}

