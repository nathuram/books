#include <stdio.h>

int main(void)
{
	int a[5][5];

	for (int *p = &a[0][0], i = 0; p < &a[5][5]; p++)
		*p = i++;

	for (int (*p) [5] = a, i = 0; i < 5;  )
		*((*p)+ i++) = 0;

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			printf("%d ", a[i][j]);

	printf("\n\n");

	return 0;


}
