#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define  MAXLENGTH 100

int find(char str[]);

void substr(char str1[], char str2[], int m, int n)
{
	int i = m, j = 0;
	while (i <= n)
		str1[j++] = str2[i++];
	str1[j++] = str2[i++];
	str1[j] = '\0';

	return;
}

void convert(char prefix[], char postfix[])
{
	char opnd1[MAXLENGTH], opnd2[MAXLENGTH];
	char post1[MAXLENGTH], post2[MAXLENGTH];
	char temp[MAXLENGTH];
	char op[1];
	int length;
	int m, n;


	if ((length = strlen(prefix)) == 1){
		if (isalpha(prefix[0])){
			postfix[0] = prefix[0];
			postfix[1] = '\0';
			return;
		}
	}

	op[0] = prefix[0];
	op[1] = '\0';


	substr(temp, prefix, 1, length-1);
	m = find(temp);
	substr(temp, prefix, m+1, length-m-1);
	n = find(temp);

	printf("m = %d \t n = %d\n", m, n);
	if ((op[0] != '+' && op[0] != '-' && op[0] != '*' && op[0] != '/') 
			|| (m == 0) || (n == 0) || (m + n + 1 != length) ) {
		
		printf("Illegal prefix string\n");
		exit(1);
	}

	substr(opnd1, prefix, 1, m);
	substr(opnd2, prefix, m+1, n);
	printf("op1: %s\nop2: %s\n", opnd1, opnd2);
	convert(opnd1, post1);
	convert(opnd2, post2);
	strcat(post1, post2);
	strcat(post1, op);
	substr(postfix, post1, 0, length);

	return;
}

int find(char str[])
{
	char temp[MAXLENGTH];
	int length;
	int m, n;
	
	if ((length = strlen(str)) == 0){
		printf("A\n");
		return 0;
	}

	if (isalpha(str[0]) != 0){
		printf("B\n");
		return 1;
	}

	if (strlen(str) < 2){
		printf("C\n");
		return 0;
	}
	
	substr(temp, str, 1, length-1);
	m = find(temp);
	if (m == 0 || strlen(str) == m){
		printf("D\n");
		return 0;
	}

	substr(temp, str, m+1, length-1);
	n = find(temp);
	if (n == 0){
		printf("E\n");
		return 0;
	}

	return (m+n+1);
}

int main(void)
{
	char str[MAXLENGTH], str2[MAXLENGTH];
	scanf("%s ", str);
	while(str[0] != 'x'){
		convert(str, str2);
		printf("%s\t\t\t\t%s\n", str, str2);
		scanf("%s ", str);
	}

	return 0;
}


