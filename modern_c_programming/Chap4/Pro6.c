#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
	int first_sum, second_sum, total;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);
	first_sum = n2+n4+n6+n8+n10+n12;
	second_sum = n1+n3+n5+n7+n9+n11;
	total = first_sum*3 + second_sum;
	printf("Check digit: %1d\n", 9-((total-1)%10));
}



