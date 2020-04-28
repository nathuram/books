#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char a;

	printf("Enter two fractions separated by a sign: ");
	
	scanf("%d/%d ", &num1, &denom1);
	a = getchar();
	scanf("%d/%d", &num2, &denom2);

	switch(a)
	{
		case '/':
			result_num = num1*denom2;
			result_denom = denom1*num2;
			break;
		case '*':
			result_num = num1*num2;
			result_denom = denom1*denom2;
			break;
		case '+':
			result_num = num1*denom2 + num2*denom1;
			result_denom = denom1*denom2;
			break;
		case '-':
			result_num = num1*denom2 - num2*denom1;
			result_denom = denom1*denom2;
			break;
		}

	printf("The result is %d/%d\n", result_num, result_denom);

	return 0;

}
