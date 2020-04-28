/* Classifies a poker hand */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* external variables */
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(int [][2]);
void analyze_hand(int [][2]);
void print_result(void);

// main: Calls read_card, analyze_hand, and print_result repeatedly
int main(void)
{
	int hand[NUM_CARDS][2] = {0};
	{
		read_cards(hand);
		analyze_hand(hand);
		print_result();
	}
}

// read_cards: Reads the cards into external variables; checks for bad cards and duplicate cards;
void read_cards(int hand[][2])
{
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card, dup_card;
	int cards_read=0;

	
		while (cards_read < NUM_CARDS)	
		{
			bad_card = false; dup_card=false;
			printf("Enter a card: ");
			rank_ch = getchar();
			switch(rank_ch)
			{
				case '0': 		exit(EXIT_SUCCESS);
				case '2': 		rank = 0; break;
				case '3': 		rank = 1; break;
				case '4': 		rank = 2; break;
				case '5': 		rank = 3; break;
				case '6': 		rank = 4; break;
				case '7': 		rank = 5; break;
				case '8': 		rank = 6; break;
				case '9': 		rank = 7; break;
				case 't': case 'T':  	rank = 8; break;
				case 'j': case 'J':	rank = 9; break;
				case 'q': case 'Q':	rank = 10; break;
				case 'k': case 'K':	rank = 11; break;
				case 'a': case 'A': 	rank = 12; break;
				default: 		bad_card = true;
			}

			suit_ch = getchar();
			switch(suit_ch)
			{
				case 'c': case 'C': suit = 0; break;
				case 'd': case 'D': suit = 1; break;
				case 'h': case 'H': suit = 2; break;
				case 's': case 'S': suit = 3; break;
				default: 		bad_card = true;
			}

		
			while ((ch = getchar()) != '\n') 
					if (ch != ' ')
						bad_card = true;

			for(int i = 0; i < cards_read; i++)
				if (hand[i][0] == rank && hand[i][1] == suit)
					dup_card = true;

			if (bad_card)
				printf("Bad card; ignored.\n");
			else if(dup_card)
				printf("Duplicate card; ignored.\n");
			else 
			{
				hand[cards_read][0] = rank;
				hand[cards_read][1] = suit;
				cards_read++;
			}
		} 
	

}

//analyze_hand: Determines whether the hand contains a straight, a flush, four-of-a-kind, and/or three-of-a-kind; determines the number of pairs; stores te results into external variables;

void analyze_hand(int hand[][2])
{
	// the best wau to implement the tests in this function would be to create separate suit and rank arrays and populate them and then test;
	int num_consec = 0, smallest_rank = hand[0][0];
	int rank, suit;
	int arr_rank[NUM_RANKS] = {0}; //this array is specifically implemented for easy 4-of-a-kind type tests;
	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;

	/* check for flush */
	suit = hand[0][1];
	for (int i = 1; i < NUM_CARDS; i++)
		if (hand[i][1] != suit)
			flush = false;
		else
			flush = true;

	/* check for straight */
	for (int i = 0; i < NUM_CARDS; i++)
	{
//		printf("hand[%d][0] = %d", i, hand[i][0]);	
		if (hand[i][0] < smallest_rank)
			smallest_rank = hand[i][0];
//		printf("\t\tsmallest_rank = %d\n", smallest_rank);
	}
//	printf("\n");

	for (int i = 0; i < NUM_CARDS; i++)
	{
//		printf("smallest_rank = %d, \tnum_consec = %d\t\ttesting smallest_rank against row %d\n", smallest_rank, num_consec, i);
		if (smallest_rank < 12 && hand[i][0] == (smallest_rank + 1))
		{
			smallest_rank++;
			num_consec++;
		}
	}

	if (num_consec == NUM_CARDS-1)
	{
		straight = true;
	}

	/* check for 4-of-a-kind, 3-of-a-kind */
	for (int i = 0; i < NUM_CARDS; i++)
	{
		rank = hand[i][0];
		arr_rank[rank]++;
	}

	for (int i = 0; i < NUM_RANKS; i++)
	{
		printf("arr_rank[%d] = %d ", i, arr_rank[i]);
	}
	printf("\n");

	for (int i = 0; i < NUM_RANKS; i++)
	{
		if (arr_rank[i] == 4) four = true;
		if (arr_rank[i] == 3) three = true;
		if (arr_rank[i] == 2) pairs++;
	}
}

//print_result: prints the classification of the hand based on the values of the external variables straight, flush, four, three, and pairs
void print_result(void)
{
	if (straight && flush) printf("Straight flush");
	else if (four) 		printf("Four of a kind");
	else if (three &&
		pairs == 1) 	printf("Full house");
	else if(flush) 		printf("Flush");
	else if(straight) 	printf("Straight");
	else if(three) 		printf("Three of a kind");
	else if(pairs == 2) 	printf("Two pairs");
	else if(pairs == 1) 	printf("Pair");
	else 			printf("High card");

	printf("\n\n");
}

