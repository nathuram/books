#include <stdio.h>
#include <color.h>

void merge(int L, int M, int H, int *arr)
{
		int m = M-L+1, n = H-M;
		   
		int	arr1[m];
		for (int i = 0; i < m; i++){
				arr1[i] = arr[L+i];
		}
		
		int arr2[n];
		for (int i = 0; i < n; i++){
				arr2[i] = arr[M+i+1];
		}

		int i = L, a = 0, b = 0;
		while (a < m && b < n){
				if (arr1[a] < arr2[b])
						arr[i++] = arr1[a++] ;
				else
						arr[i++] = arr2[b++]; 
		}

		while (a < m)
				arr[i++] = arr1[a++];

		while (b < n)
				arr[i++] = arr2[b++];
}


void msort(int L, int H, int *arr)
{
		if (H - L < 1)
				return ;
		else{
				int M = (H+L)/2;
				msort(0, M, arr);
				msort(M+1, H, arr);
				merge(L, M, H, arr);
				return;
		}
}

int main(void)
{
		int n;
		scanf("%d", &n);
		int arr[n];
		 
		for (int i = 0; i < n; i++)
				scanf("%d ", &arr[i]);

		for (int i = 0; i < n; i++)
				printf(RED"%d ", arr[i]);
		printf("\n");

		msort(0, n-1, arr);
		for (int i = 0; i < n; i++)
				printf(GREEN"%d ", arr[i]);
		printf(COLOR_RESET"\n");

		return 0;
}
