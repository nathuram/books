#include <stdio.h>

int main(void)
{
	int hours, minutes;
	char a;

	printf("Enter a 12-hour time: ");
	scanf("%2d:%2d ", &hours, &minutes);
	
	a = getchar();

	switch(toupper(a))
	{
		case 'A':
			hours = hours % 12;
			break;
		case 'P':
			hours = 12*hours + (hours%12);
			break;

	}
	
	printf("Equivalent 24 hour time: %.2d:%.2d\n", hours, minutes);

	return 0;
}

