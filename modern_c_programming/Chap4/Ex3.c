#include <stdio.h>

int main(void)
{
	printf("%d\n", 8/5);
	/* Output: 1 */
	
	printf("%d\n", -8/5);
	/* Output: either -1 or -2 */

	printf("%d\n", 8/-5);
	/* Output: either -1 or -2 */
	
	printf("%d\n", -8/-5);
	/* Output: either -1 or -2 */
	
	return 0;
}

