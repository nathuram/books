#include <stdio.h>
#include <color.h>
#include <stdlib.h>
#include <math.h>

/* I'm having some issue dynamically allocating memory for a 2d array, so I'm doing it this way by passing a results array */
void minor(int n, int arr[n][n], int res_arr[n-1][n-1], int x, int y) //Calculate minor and return in result array
{
		int I = 0,  J;
		for (int i = 0; i < n; i++){   //This loop turns arr2 into a minor of a given element
				if (i == x)
						continue;
				J = 0;
				for (int j = 0; j < n; j++)
						if (j != y)
								res_arr[I][J++] = arr[i][j];
				I++;
		}
}

void matrixprint(int n, int arr[n][n], int x, int y)
{
		for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++)
						if (i != x  || j != y)
								printf("%4d", arr[i][j]);
						else
								printf(RED "%4d" COLOR_RESET, arr[i][j]);
				printf("\n");
		}
		printf("\n\n\n\n");
		return;
}

int determinant(int n, int arr[n][n])
{
		if (n == 1){
				printf(RED "%4d\n\n\n\n\n" COLOR_RESET, arr[0][0]);
				return arr[0][0];
		}
		else {
				int det = 0;
				for (int i = 0; i < n; i++){
						matrixprint(n, arr, i, 0);
						int arr2[n-1][n-1];
						minor(n, arr, arr2, i, 0);
						det += (pow(-1, (i+j)) * arr[i][0] * determinant(n-1, arr2));
				}
				return det;
		}
}

int main(void)
{
		int n;
		printf(RED "Enter size of matrix: " GREEN);
		scanf("%d", &n);

		int arr[n][n];
		for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
						printf(RED "Enter a number: " GREEN);
						scanf("%d", &arr[i][j]);
				}
				printf("\n");
		}

		printf(BLUE"The determinant is :" GREEN "%d" COLOR_RESET "\n", determinant(n, arr));
		return 0;
}

