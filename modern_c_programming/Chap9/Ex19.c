#include <stdio.h>

int main(void)
{
	void pb(int n);

	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	
	pb(x);
	printf("\n");

	return 0;
}

void pb(int n)
{
	if (n != 0)
	{
		pb(n /2);
		putchar('0' + n%2);
	}
}

// This is an extremely clever program that prints out the binary value for an integer value
// Here's how it works
// if n is not 0
// 	it repeatedly calls n/2
// 	at each stage, it check if n%2 is 1 or 0 and prints that
// 	the '0' + thing is to convert the integer into a character
// 	
// This is basically the divide by 2 method of converting to binary
