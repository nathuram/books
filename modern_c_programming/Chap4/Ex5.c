#include <stdio.h>

int main(void)
{
	printf("%d\n", 8%5);
	/* Output: 3 */
	
	printf("%d\n", -8%5);
	/* Output: either 2 or 5, 2 more likely */

	printf("%d\n", 8%-5);
	/* Output: either 2 or 5, again 2 more likely */
	
	printf("%d\n", -8%-5);
	/* Output: 3 */
	
	return 0;
}

