#include <stdio.h>

void test(int *);

int main(void)
{
	int a[2][2] = {{200, 200}, {400, 400}};

	int (*p)[2] = a;

	printf("%d ", *p[0]);
	printf("%d ", *(p[1]+1));

	printf("\n\n");

	return 0;
}

//void test(int *p)
//{
//	for (int a = 0; a < 2; a++)
//		printf("%d ", *p++);
//}

