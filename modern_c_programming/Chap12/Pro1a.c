#include <stdio.h>

#define N 100

int get_message(char [], int n);
void reverse_message(char [], int n);

int main(void)
{
	char message[N];
	
	int n = get_message(message, N);

	reverse_message(message, n);

	printf("Reversal is: ");
	for (int i = 1; i <= n; i++) // Taking it from 1, because the /n character was being printed otherwise.
		printf("%c", message[i]);
	printf("\n\n");

	return 0;

}

int get_message(char message[], int n)
{
	int i = 0;

	printf("Enter message: ");

	for (i = 0; i < N; i++)
	{
		message[i] = getchar();
		if (message[i] == '\n')
			break;
	}

	return i;
}

void reverse_message(char message[], int n)
{
	char swap;
	int m = 0;

	while (m < n)
	{
		swap = message[m];
		message[m++] = message[n];
		message[n--] = swap;
	}

	return; 
}


		

