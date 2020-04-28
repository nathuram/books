#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int *p = 0; 

	while (true)
	{
		printf("%p\n", (void *) p);
		p++;
	}

	return 0;
}
