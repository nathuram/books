#include <stdio.h>

int main(void)
{
	int arr[5] = {0, 1, 2, 3, 4};
	int (*q) = &arr;

	for (int a = 0; a < 5; a++)
		printf("%d ", *(q++));
	printf("\n");
}

	
