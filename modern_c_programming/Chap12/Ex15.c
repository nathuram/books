#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	int temperatures[7][24];

	int i;

	printf("Enter row: ");
	scanf(" %d", &i);

	for (int i = 0; i < 7; i++)
	{
		printf("\n");
		for (int j = 0; j < 24; j++)
		{
			temperatures[i][j] = rand() % 1000;
			printf("%4d ", temperatures[i][j]);
		}
	}

	printf("\n\n");
			

	for (int *p = *(temperatures + i); p < *(temperatures + i) + 24; p++)
		printf("%4d ", *p);
	printf("\n\n");

	return 0;
}


