#include <stdio.h>

int main(void)
{
	int day, month, year, earliest_day, earliest_month, earliest_year;
	
	printf("Enter a date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &month, &day, &year);
	
	earliest_year=year; earliest_month=month; earliest_day=day;

	while (day != 0 && month != 0 && year != 0){
		printf("Enter a date (mm/dd/yy): ");
		scanf("%2d/%2d/%2d", &month, &day, &year);

		if (year == 0)
			continue;

		if (year == earliest_year){
			if (month == earliest_month){
				 if (day < earliest_day){
				       earliest_year=year; earliest_month=month; earliest_day=day;}
			}
		 	else if (month < earliest_month){
				earliest_year=year; earliest_month=month; earliest_day=day;
			}
		}
		else if (year < earliest_year){
			earliest_year=year; earliest_month=month; earliest_day=day;
		}
	}

	printf("%.2d/%.2d/%.2d is the earliest date\n", earliest_month, earliest_day, earliest_year);
}
