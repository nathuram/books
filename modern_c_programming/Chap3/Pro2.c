#include <stdio.h>

int main(void)
{
	int item_number, date, month, year;
	float unit_price;

	printf("Enter item number: ");
	scanf("%d%", &item_number);

	printf("Enter unit price ");
	scanf("%f", &unit_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &date, &year);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%-d\t\t$%.2f\t\t%d/%d/%d\n", item_number, unit_price, month, date, year);

	return 0;
}
