#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
	int hours, minutes, time;
	int departure_time, arrival_time;
	char am_pm_a, am_pm_d;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &minutes);

	time = (60*hours)+minutes;

	find_closest_flight(time, &departure_time, &arrival_time);
	
	if (arrival_time < 720)
		am_pm_a = 'A';
	else
		am_pm_a = 'P';

	if (departure_time < 720)
		am_pm_d = 'A';
	else
		am_pm_d = 'P';

	if ((arrival_time < 60) || ((arrival_time <780) && (arrival_time > 720)))
		printf("The closest arrival time is 12:%2.2d %cM\n", arrival_time%60, am_pm_a);
	else
		printf("The closest arrival time is %2.2d:%2.2d %cM\n", (arrival_time/60)%12, arrival_time%60, am_pm_a);

	if ((departure_time) < 60 || ((departure_time<780) && (departure_time > 720)))
		printf("The closest departure time is 12:%2.2d %cM\n", departure_time%60, am_pm_d);
	else
		printf("The closest departure time is %2.2d:%2.2d %cM\n", (departure_time/60)%12, departure_time%60, am_pm_d); 

	return 0;
}

void find_closest_flight(int time, int *departure_time, int *arrival_time)
{
	if (time >= 480 && time <= 543)
	       if (time < (480+543)/2)
		{
		 	*departure_time = 60*8; *arrival_time =  60*10+16;
		}
	       else 
	        {
			*departure_time = 60*9+43; *arrival_time = 60*11+52;
	        }

	else if (time >= 543 && time <= 679)
		if (time < (543+679)/2)
		{
			*departure_time = 60*9+43; *arrival_time = 60*11+53;
		}
		else
		{
			*departure_time = 60*11+19; *arrival_time = 60*13+31;
		}
	else if (time >= 679 && time <= 767)
		if (time < (679+767)/2)
		{	
			*departure_time = 60*11+19; *arrival_time = 60*13+31;
		}
		else
		{
			*departure_time = 60*12+47; *arrival_time = 60*15;
		}
	else if (time >= 767 && time <= 840)
		if (time < (767+840)/2)
		{	
			*departure_time = 60*12+47; *arrival_time = 60*15;
		}
		else
		{
			*departure_time = 60*14; *arrival_time = 60*18+8;
		}
	else if (time >= 840 && time <= 945)
		if (time < (840+945)/2)
		{
			*departure_time = 60*14; *arrival_time = 60*4+8;
		}
		else
		{
			*departure_time = 60*15+45; *arrival_time = 60*17+55;
		}
	else if (time >= 945 && time <= 1140)
		if (time < (945 + 1140)/2)
		{	
			*departure_time = 60*15+45; *arrival_time = 60*17+55;
		}
		else
		{
			*departure_time = 60*19; *arrival_time = 60*21+20;
		}
	else if (time >= 1140 && time <= 1305)
		if (time < (1140+1305)/2)
		{	
			*departure_time = 60*19; *arrival_time = 60*21+20;
		}
		else
		{
			*departure_time =60*21+45; *arrival_time = 60*23+58;
		}
	else if (time <= 172)
	{
		*departure_time = 60*21+45; *arrival_time = 60*23+58;
	}
	else
	{
		*departure_time = 60*8; *arrival_time = 60*10+16;
	}
}

