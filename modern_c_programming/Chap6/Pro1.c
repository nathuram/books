#include <stdio.h>

int main(void)
{
	float i, largest;

	do {
		printf("Enter a number: ");
		scanf("%f", &i);

		if (i > 0 && i > largest)
			largest = i;
	} while ( i != 0);

	printf("The largest number entered was %f\n", largest);
}
