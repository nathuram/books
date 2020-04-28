#include <stdio.h>

void split_time(long, int *, int *, int *);

int main(void)
{
	printf("Enter number of seconds: ");

	int total_sec;
	scanf("%d", &total_sec);

	int hr, min, sec;

	split_time(total_sec, &hr, &min, &sec);

	printf("The time is %d : %d : %d\n", hr, min, sec);

	return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*sec = total_sec % 60;
	total_sec /= 60;

	*min = total_sec % 60;
	total_sec /= 60;

	*hr = total_sec % 60;

	return;
}
