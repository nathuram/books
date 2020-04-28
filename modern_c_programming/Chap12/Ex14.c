#include <stdio.h>
#include <stdbool.h>


bool search(const int a[], int n, int key);

int main(void)
{
	int arr[7][24]; 
	int key;

	arr[6][23] = 32;

	printf("Enter a number: ");

	scanf("%d", &key);

	switch(search(*arr, 24*7, key))
	{
		case true: printf("%d is in the array\n", key);
			   break;
		case false: printf("%d is not in the array\n", key);
			    break;
	}



	return 0;
}

bool search(const int a[], int n, int key)
{
	for (int *p = (int *) a; p < a + n; p++)
		if (key == *p)
			return true;

	return false;
}
