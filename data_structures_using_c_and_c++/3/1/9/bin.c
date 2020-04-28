#include <stdio.h>
#include <color.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int bin_srch(int arr[], int n, int low, int high, int *count)
{
		(*count)++;

		if (low > high)
				return -1;

		int mid = (high + low)/2;
		if (arr[mid] == n)
				return mid;
		
		if (arr[mid] < n)
				return bin_srch(arr, n, mid+1, high, count);
		else
				return bin_srch(arr, n, low, mid-1, count);
}


void populate(int n, int *arr)
{
		for (int i = 0; i < n; i++)
				arr[i] = rand()%n;
}

int main(void)
{
		srand(time(NULL));

		for (int i = 10; i <= 100; i++){
				int arr[i], max = 0;
				populate(i, arr);
				
				for (int j = 0; j < i; j++){
						int count = 0;
						bin_srch(arr, j, 0, i, &count);
						if (max < count)
								max = count;
				}
				printf("For an array of size " RED "%d " COLOR_RESET "the max number of calls was " GREEN "%d" COLOR_RESET " and log2(" RED "%d" COLOR_RESET ") is " CYAN "%d\n" COLOR_RESET,
								i, max, i, ((int) log2((float) i)) );
		}

		return 0;
}


