#include <stdio.h>

int main(void)
{
	int m, n, a, b, swap;

	printf("Enter a fraction: ");
	scanf("%d/%d", &m, &n);

	a = m; b = n;

	if (b==0){
		printf("0 error\n");
		return 0;
	}

	while (b != 0){
		swap = b;
		b = a%b;
		a = swap;
	}

	printf("In lowest terms %d/%d\n", m/a, n/a);
	
	return 0;
}
	

