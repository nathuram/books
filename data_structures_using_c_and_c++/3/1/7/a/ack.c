#include <stdio.h>
#include <color.h>

int ack(int m, int n)
{
		if (m == 0)
				return n+1;

		if (n == 0)
				return ack(m-1, 1);

		return ack(m-1, ack(m, n-1));
}

int main(void)
{
		int m, n;
		printf("Enter first number: ");
		scanf("%d", &m);

		printf("Enter second number: ");
		scanf("%d", &n);

		printf("Ackerman(%d, %d) is %d\n", m, n, ack(m, n));
		
		/*
		for (int i = 0; i < 4; i++)
				for (int j = 0; j < 11; j++)
						printf("Ackerman(%d, %d) is %d\n", i, j, ack(i,j));
		*/
		
		
		return 0;
}
