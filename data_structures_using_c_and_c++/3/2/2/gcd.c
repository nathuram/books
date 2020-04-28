#include <stdio.h>
#include <color.h>

int gcd(int x, int y)
{
		if (y <= x && x % y == 0)
				return y;

		if (x < y)
				return gcd (y, x);

		return gcd(y, x%y);
}

int iter_gcd(int x, int y)
{
		int tmp;
		if (x < y) {
				tmp = x;
				x = y;
				y = tmp;
		}

		while (y > 0){
				tmp = x;
				x = y;
				y = tmp%y;
		}

		return x;
}

				


int main(void)
{

		int x, y;
		printf("Enter a number: " GREEN);
		scanf("%d", &x);
		printf(COLOR_RESET);
		printf("Enter second number: " GREEN);
		scanf("%d", &y);
		printf(COLOR_RESET);

		printf("The iterative solution is: " RED "%d\n" COLOR_RESET, iter_gcd(x, y));
		printf("The recursive solution is: " RED "%d\n" COLOR_RESET, gcd(x, y));

		return 0;
}

