#include <stdio.h>

int main(void)
{
	int day1, day2, month1, month2, year1, year2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &month1, &day1, &year1);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &month2, &day2, &year2);

	if (year2 != year1)
		year2 < year1 ? 
			printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1):
			printf("%d/%d/%d is ealier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
	else if (month2 != month1)
		month2 < month1 ?
			printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1):
			printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
	else if (day2 != day1)
		day2 < day1 ?
			printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1):
			printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
	else
		printf("%d/%d/%d is the same as %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
}
