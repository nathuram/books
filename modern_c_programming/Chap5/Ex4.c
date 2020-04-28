#include <stdio.h>

int main(void)
{
	int i, j;

	printf("Enter i: ");
	scanf("%d", &i);

	printf("Enter j: ");
	scanf("%d", &j);

	printf("%d\n", i > j ? 1 : i == j ? 0 : -1);
}
