#include <stdio.h>

/* .s represent spaces */

int main(void)
{
	printf("%6d, %4d\n", 86, 1040); /* This should print ....86, 1040 */
	printf("%12.5e\n", 30.253); /* This should print 000030.25300 */
	printf("%.4f\n", 83.162); /* This should print 83.1620 */
	printf("%-6.2g", .0000009979); /* This should print 99.79e-8 */
}

