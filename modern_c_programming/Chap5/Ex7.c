#include <stdio.h>

// 17
// 17

int main(void)
{
	int i = 17; 
	printf("%d\n", i >= 0 ? i: -i);

	i = -17;
	printf("%d\n", i >= 0? i: -i);
}
