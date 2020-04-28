#include <stdio.h>

int main(void)
{
	void selection_sort(int n, int array[]);
	int num;

	printf("Enter number of elements in array: ");
	scanf("%d", &num);

	int array[num];

	for (int a = 0; a < num; a++)
		scanf("%d", &array[a]);

	for (int a = num; a >= 1; a--){
		selection_sort(a, array);
	}

	for (int a = 0; a < num; a++)
		printf("%d ", array[a]);
		
	printf("\n");

	return 0;
}

// I've confirmed that functions can change arguments directly, check TestArr.c for example.

void selection_sort(int n, int array[])
{
	int a;

	for (int x = 0; x < n; x++)
		if (array[x] > array[n-1])
		{
			a = array[x];
			array[x] = array[n-1];
			array[n-1] = a;
	
		}

	return ;
}
