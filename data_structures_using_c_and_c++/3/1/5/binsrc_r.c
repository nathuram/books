#include <stdio.h>

int binsrch(int * arr, int n, int low, int high)
{
		if (low > high)
				return -1;
		else {
				int mid = (high+low)/2;
				if (arr[mid] == n)
						return mid;
				else if (arr[mid] < n)
						return binsrch(arr, n, mid+1, high);
				else
						return binsrch(arr, n, low, mid-1);
		}
}



int main(void)
{
		int loc, arr[10] = {1, 3, 7, 15, 21, 22, 36, 78, 95, 106};

		loc = binsrch(arr, 1, 0, 9);
		printf("1 is at %d\n", loc);

		loc = binsrch(arr, 20, 0, 9);
		printf("20 is at %d\n", loc);

		loc = binsrch(arr, 36, 0, 9);
		printf("36 is at %d\n", loc);

		return 0;
}
