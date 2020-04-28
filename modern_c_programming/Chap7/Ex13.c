#include <stdio.h>

int main(void)
{
	char c='\1';
	short s=2;
	int i=-3;
	long l=5;
	float f=6.5f;
	double d = 7.5;

	printf("%d\n", c*i); //-3
	printf("%f\n", f/c); //6.5
	printf("%lf\n", f - d); //-1.0000000000000
	printf("%ld\n", s + l); //7
        printf("%lf\n", d/s); //3.75
	printf("%d\n", (int) f); // 6	
}
