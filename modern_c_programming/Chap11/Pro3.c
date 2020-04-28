#include <stdio.h>

void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
	int m, n;
	int reduced_numerator, reduced_denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &m, &n);

	reduce(m, n, &reduced_numerator, &reduced_denominator);

	printf("In lowest terms %d/%d\n", reduced_numerator, reduced_denominator);
	
	return 0;
}

void reduce (int m, int n, int *reduced_numerator, int *reduced_denominator)
{

	int a = m, b = n;
	int swap;

	if (b==0){
		printf("0 error\n");
		return;
	}

	while (b != 0){
		swap = b;
		b = a%b;
		a = swap;
	}

	*reduced_numerator = m/a;
	*reduced_denominator = n/a;

	return;
}

