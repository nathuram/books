#include <stdio.h>

int main(void)
{	
	float r;

	printf("Enter the radius: ");
	scanf("%f", &r);

	printf("Volume of sphere is %.2f cubic-meters \n", ( (4/3)*(3)*(r*r*r) ) );
}
