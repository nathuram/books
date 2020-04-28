#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(void)
{
	double a[3] = {1, 2, 3};
	double b[3] = {1, 2, 3};

	printf("The inner product is %f\n", inner_product(a, b, 3));

	return 0;
}




double inner_product(const double *a, const double *b, int n)
{
	double sum = 0;

	for (double *i = (double *) a, *j = (double *) b; i < a + n; i++)
	{
		sum += *i*(*j);
		j++;
	}

	return sum;
}

