/* So this sort of works. Because we're populating the 0th row to 100000, and then filling in the other rows iteratively, the following happens.
 A[1][n] is filled properly till atleast n = 10000. Since that's where our first for loop (j <= 10000) stops, A[1][n] isn't populated beyond n = 10000. 
 Now A[2][n] is populated correctly till n = 4999. Now A[2][5000] = A[1][10001], but A[1][10001] hasn't been populated, so from here on out, A[2][n] is filled incorrectly. 
 Similarly, A[3][n] is populated correctly till n = 10. Now A[3][11] = A[2][8189]. But our table is only correctly populated till A[2][4999]. 
 And so on this continues. 
 It is definitely "possible" to calculate the Ackermann function iteratively using memoization. 
 But, you need a LOT of memory and have to fill up the starting rows to exponentially large number of elements for each row you want to compute, and must include guards against using unpopulated values"
*/

#include <stdio.h>
#include <color.h>

unsigned long int ack_table [5][1000000];

void ack(int m, int n)
{
		for (int i = 0; i < 1000000; i++)
			   ack_table[0][i] = (unsigned long) i+1;
		printf("Filled first row\n");
		
		for (int i = 1; i < m; i++)
				for (int j = 0; j <= 10000; j++){
						if (j == 0){
								ack_table[i][j] = ack_table[i-1][1];
								printf("Ackerman(" RED "%d, %d" COLOR_RESET ") = Ackerman(" GREEN "%d, %d" COLOR_RESET ") = " BLUE "%lu\n" COLOR_RESET, i, j, i-1, 1, ack_table[i][j]);
						}
						else{
								ack_table[i][j] = ack_table[i-1][(ack_table[i][j-1])];
								printf("Ackerman(" RED "%d, %d)" COLOR_RESET " = Ackerman(" GREEN "%d, %lu" COLOR_RESET ") = " BLUE "%lu\n" COLOR_RESET, i, j, i-1, ack_table[i][j-1], ack_table[i][j]);
						}
				}


		return; 
}




int main(void)
{
		unsigned long int m, n;

		printf("Enter first number: ");
		scanf("%lu", &m);

		printf("Enter second number: ");
		scanf("%lu", &n);

		ack(m, n);


		return 0;
}

