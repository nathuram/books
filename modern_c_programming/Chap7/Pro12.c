#include <stdio.h>

int main(void)
{
	char operator; float sum = 0; float operand;

	printf("Enter an expression: ");

	scanf("%f", &operand);
	sum = operand;

	while ((operator = getchar() )!= '\n')
	{
		scanf("%f", &operand);

		switch (operator)
		{
			case '+':
				sum += operand;
				break;
			case '-':
				sum -= operand;
				break;
			case '/':
				sum /= operand;
				break;
			case '*':
				sum *= operand;
				break;
			}
	}

	printf("Value of expression: %.1f\n", sum);

	return 0;
}

