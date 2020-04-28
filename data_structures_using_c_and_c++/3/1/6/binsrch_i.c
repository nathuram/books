#include <stdio.h>

int binsrch(int * arr, int n, int low, int high)
{

		if (low > high)
				return -1;

		int mid = (low + high)/2;

		if (arr[mid] == n)
				return mid;

		if (arr[mid] < n)
				return binsrch(arr, n, mid+1, high);
		else
				return binsrch(arr, n, low, mid-1);
}

int main(void)
{
		int arr[10] = {1, 3, 7, 15, 21, 22, 36, 78, 95, 106};
		int arr2[3] = {1, 20, 36};

		for (int i = 0; i < 3; i++)
				printf("%d is at %d\n", arr2[i], binsrch(arr, arr2[i], 0, 9));

		return 0;
}


