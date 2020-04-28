#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool weekend[7] = {true, [6]=true};

	for (int a = 0; a < 7; a++)
		printf(" %d", weekend[a]);

	printf("\n");

	return 0;
}

