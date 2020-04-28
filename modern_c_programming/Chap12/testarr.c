#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};

	int *p = &a;
	int *q = a;
	
	printf("\t\t\t\t\tp\t\tq\n\n");
	printf("Original Pointers: \t%20p%20p", (void *) p, (void *) q);
	printf("\n\n");
	printf("Incremented Pointers:\t%20p%20p", (void *) (p+1), (void *) (q+1));
	printf("\n\n");
	printf("Pointer values:         %20d%20d", *p, *q);
	printf("\n\n");

	printf("%d", (void *) (p+1) == (void *) (q+1));
	printf("\n");

	return 0;
}
