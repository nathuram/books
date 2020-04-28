#include <stdio.h>

int main(void)
{
	int hours, minutes, time;
	char a;

	printf("Enter a 12-hour time: ");
	
	scanf("%2d:%2d ", &hours, &minutes);
	a = getchar();
	
	switch(toupper(a))
	{
		case 'A':
			hours = hours%12;
			break;
		case 'P': 
			hours = 12 + hours%12;
			break;
	}



	time = (60*hours)+minutes;

	if (time >= 480 && time <= 543)
		time < (480+543)/2 ? 
			printf("Closest departure time is 8:00 AM, arriving at 10:16 AM\n"):
			printf("Closest departure time is 9:43 AM, arriving at 11:52 AM\n");
	else if (time >= 543 && time <= 679)
		time < (543+679)/2 ?
			printf("Closest departure time is 9:43 AM, arriving at 11:53 AM\n"):
			printf("Closest departure time is 11:19 AM, arriving at 1:31 PM\n");
	else if (time >= 679 && time <= 767)
		time < (679+767)/2 ?
			printf("Closest departure time is 11:19 AM, arriving at 1:31 PM\n"):
			printf("Closest departure time is 12:47 PM, arriving at 3:00 PM\n");
	else if (time >= 767 && time <= 840)
		time < (767+840)/2 ?
			printf("Closest departure time is 12:47 PM, arriving at 3:00 PM\n"):
			printf("Closest departure time is 2:00 PM, arriving at 4:08 PM\n");
	else if (time >= 840 && time <= 945)
		time < (840+945)/2 ?
			printf("Closest departure time is 2:00 PM, arriving at 4:08 PM\n"):
			printf("Closest departure time is 3:45 PM, arriving at 5:55 PM\n");
	else if (time >= 945 && time <= 1140)
		time < (945 + 1140)/2 ?
			printf("Closest departure time is 3:45 PM, arriving at 5:55 PM\n"):
			printf("Closest departure time is 7:00 PM, arriving at 9:20 PM\n");
	else if (time >= 1140 && time <= 1305)
		time < (1140+1305)/2 ?
			printf("Closest departure time is 7:00 PM, arriving at 9:20 PM\n"):
			printf("Closest departure time is 9:45 PM, arriving at 11:58 PM\n");
	else if (time <= 172)
		printf("Closest departure time is 9:45 PM, arriving at 11:58 PM\n");
	else
		printf("Closest departure time is 8:00 AM, arriving at 10:16 AM\n");
}
