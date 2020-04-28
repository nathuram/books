#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	bool play_game(void);

	char c;
	int wins=0, loses=0;

	srand((unsigned) time(NULL)); //for some weird reason srand inside another function other than main was leading to rand generating the same values everytime

	for(bool play_again = true; play_again != false  ;)
	{
		if (play_game())
		{
			printf("You win\n");
			wins++;
		}
		else
		{
			printf("You lose\n");
			loses++;
		}

		printf("Do you wish to play again (y/N): ");

		while ((c = getchar()) != '\n')
			if (toupper(c) != 'Y')
				play_again = false;
		
	}

	printf("Wins: %d\tLosses: %d\n", wins, loses);

	return 0;
}

bool play_game(void)
{
	int roll_dice(void);
	const int point = roll_dice();

	switch(point)
	{
		case 2: case 3: case 12:
			return false; break;
		case 7: case 11: 
			return true; break;
	}

	for(; ;)
	{
		int p = roll_dice();
		
		if (p == 7)
			return false;

		if(p == point)
			return true;
	}
}

int roll_dice(void)
{
	int roll1 = (rand() % 6) + 1;
	printf("Rolling 1 again\n");
	int roll2 = (rand() % 6) + 1; // adding 1 to these two so I get 1 - 6 range instead of 0 - 5;
	printf("Rolling 2 again\n");

	printf("You rolled a %d\nYou rolled a %d\n", roll1, roll2);
	printf("Total %d\n", roll1+roll2);

	return roll1+roll2;
}

	



	

