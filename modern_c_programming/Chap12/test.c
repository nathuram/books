#include <stdio.h>

int main(void)
{
	int a = 200, b = 400, c = 800;
	int *arr[3] = {&a, &b, &c};

	int *p;

	p = arr;

	return 0;
}
