#include <stdio.h>

int succ(int x)
{
		return (++x);
}

int add(int a, int b)
{
		if (b == 0)
				return a;
		else 
				return add(succ(a), b-1);
		
}



int main(void)
{
		int a, b;

		printf("Enter first number: ");
		scanf("%d", &a);

		printf("Enter second number: ");
		scanf("%d", &b);

		printf("%d\n", add(a, b));

		return 0;

}
