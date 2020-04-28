#include <stdio.h>

int main(void)
{
	int gs_one, group_id, pub_code, item_num, check_digit; 

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs_one, &group_id, &pub_code, &item_num, &check_digit);

	printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gs_one, group_id, pub_code, item_num, check_digit);

	return 0;
}
