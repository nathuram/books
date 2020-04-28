#include <stdio.h>
#include <math.h>

int main(void)
{
	double guess=1; double number; double prev_guess;

	printf("Enter a positive number: ");
	scanf("%lf", &number);

	while ( fabs(guess-prev_guess) > (guess*0.00001))
	{
		printf("%f\t %f\t %f\t %f\n", number, guess, number/guess, ( number+(number/guess))/2);
		prev_guess = guess;
		guess = (( guess + (number/guess)) /2);
	}

	printf("Square root: %f\n", guess);
	
	return 0;
}
