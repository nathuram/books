#include <stdio.h>

int bis(int x, int m)
{
		return x | m;
}

int bic(int x, int m)
{
		return x&(~m);
}

int bool_or(int x, int y) {
		return bis(x, y);
}

int bool_xor(int x, int y){
		return bis(bic(x, y), bic(y, x));
}

int main(void)
{
		int a = 10;
		int b = 2;

		printf("A OR B = %d\n", a|b);
		printf("A bool_or B = %d\n", bool_or(a, b));

		printf("A XOR B = %d\n", a^b);
		printf("A bool_xor B = %d\n", bool_xor(a, b));

		return 0;
}

