/* If you can just convert push to 1 and pop to 2, we can take those as input and then figure out if overflow has occured. I won't code for underflow because the problem doesn't ask for it, but the code won't be correct without accounting for underflow as well. */

#include <stdio.h>

int main(void)
{
		int total = 0;
		int arrsize;
		int d;

		scanf("%d ", &arrsize);

		scanf("%d ", &d);
		while (d != 3)
		{
				if (d == 1)
						total++;
				else
						total--;
				
				if (total >= arrsize){
						printf("overflow\n");
						return 0;
				}
		}

		return 0;
}

		
