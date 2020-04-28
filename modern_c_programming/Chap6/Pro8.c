#include <stdio.h>

int main(void)
{
	int num_days, month_start;

	printf("Enter number of days in month: ");
	scanf("%2d", &num_days);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%1d", &month_start);

	for (int i = 1; i < month_start; i++)
		printf("\t");

	for (int i = 1; i <= num_days; i++){
		printf("%d\t", i);
	
	if ( ( (month_start - 1) + i) % 7 == 0)
		printf("\n");
		
	}
	printf("\n");
		
}
