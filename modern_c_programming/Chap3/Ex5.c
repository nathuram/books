#include <stdio.h>
int main(void)
{
	float x, y;
	int i;

	scanf("%f%d%f", &x, &i, &y); /* The input is 12.3 45.6 789 */

	printf("%0.2f %2d %0.2f\n", x, i, y); /*The output should be 12.30 45 .60 */
}	
