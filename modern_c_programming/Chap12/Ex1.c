#include <stdio.h>

int main(void)
{
	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1], *q = &a[5];

	printf("a) The value of *(p+3) = %d, expected value %d\n", *(p+3), a[4]);
	printf("b) The value of *(q+3) = %d, expected value %d\n", *(q+3), a[8]);
	printf("c) The value of q - p = %p, expected value %d\n",  (void *) (q - p), 5-1*sizeof(int));
	printf("d) p < q is %d, expected value 1\n", (p<q));
	printf("e) *p<*q is %d, expected value 0\n", (*p<*q));

	printf("%d %d\n", q, p);

	return 0;
}


