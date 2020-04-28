#include <stdio.h>

int main(void)
{
	int array[5][5], row_sum, column_sum, high_score, low_score;

	for (int a = 0; a < 5; a++){
		printf("Enter grades of Student %d: ", a);
		for (int b = 0; b < 5; b++)
			scanf("%d", &array[a][b]);
	}

	for (int a = 0; a < 5; a++){
		printf("Total for student %d: ", a);
		for (int b = 0; b < 5; b++)
			row_sum += array[a][b];
		printf(" %d", row_sum);
		printf(" \t Average for student %d: %d\n", a, row_sum/5);
		row_sum=0;
	}

	for (int a = 0; a < 5; a++){
		column_sum=0; high_score = 0; low_score=0;
		printf("Average score for quiz %d", a);
		for (int b = 0; b < 5; b++){
			column_sum += array[b][a];
			if (high_score < array[b][a])
				high_score=array[b][a];
			if (low_score > array[b][a])
				low_score=array[b][a];
		}
		printf(" %d", column_sum/5);
		printf(" High score for quiz %d: %d ", a, high_score);
		printf(" Low score for quiz %d: %d\n", a, low_score);
	}

	printf("\n");
	return 0;
}

