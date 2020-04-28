#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STEPS ((int) sizeof(alphabets)/sizeof(alphabets[0]) )

int main(void)
{
	char board[10][10];
	const char alphabets[]={'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int locX=0, locY=0; 				// Using two variables instead of a single array for more clarity

	for (int a = 0; a < 10; a++) 			//
		for (int b = 0; b < 10; b++) 		// This part initializes the board array
			board[a][b] = '.';  		//
	board[0][0]='a'; 				//

	srand((unsigned) time(NULL)); 			// Random number generator initialization


	for (int a = 0; a < STEPS; a++){


		int blocked[4]={0}; 			// Initializing an array to keep track of blocked sides on the board
		
		if (locY != 0){ 				// 		   
			if (board[locY - 1][locX] != '.') 	// If we're on the first row of the board, the way up is blocked. 
				blocked[0]=1; 			// If not, then we check to see if the location directly above ours is empty. If not,
		} 						// the way up is blocked
		else {						//
			blocked[0]=1; 				//
		}	

		if (locY != 9){ 				//
			if (board[locY + 1][locX] != '.') 	// If we're on the last row of the board, the way down is blocked.
				blocked[2]=1; 			// If we're not (on the last row of the board), then we check to see if the location directly below ours is empty.
		} 						// If not, the way down is blocked.
		else {						//
			blocked[2]=1; 				//
		}

		if (locX != 0) { 				//
			if (board[locY][locX - 1] != '.') 	// If we're on the first column of the board, the way left is blocked.
				blocked[3]=1; 			// If we're not (on the first column of the board), then we check to see if the location directly left of our current position is empty.
		} 						// If not, the way left is blocked.
		else{ 						//
			blocked[3]=1; 				//
		}

		if (locX != 9) { 				//
			if (board[locY][locX + 1] != '.') 	// If we're on the last column of the board, the way left is blocked.
				blocked[1]=1; 			// If we're not (on the last column of the board), then we check to see if the location directly right of our current position is empty.
		} 						// If not, the way right is blocked.
		else{						//
			blocked[1]=1; 				//
		}

		if ((blocked[0] + blocked[1] + blocked[2] + blocked[3]) == 4) 	// If all 4 sides are blocked, we have no possible moves left.
			break; 						  	// In such a case we exit the loop.

		int move = (rand() % 4)+1; 					// We generate a random move.

		switch(move)
		{
			case 1:  						// Move 1 = Move up
				
				if (blocked[0] == 1){  				// If we're blocked from moving up, we decrement 'a', and then break from the switch, and reiterate the loop. 
					a--; 					// The decrement allows us to stay on the same letter. Reiterating the loop generates another random move.
					break; 					//
				} 						//

				
				board[locY - 1][locX] = alphabets[a]; 		// Change the location above ours to a letter.
				
				locY -= 1; 					// Updating current location
				break;

			case 2: 						// Move 2 = Move right

				if (blocked[1] == 1){ 				// If we're blocked from moving right, we decrement 'a', and then break from the switch to reiterate the loop.
					a--; 					// The decrement allows us to stay on the same letter, and reiterating the loop generates another random move.
					break; 					//
				} 						//

				board[locY][locX + 1] = alphabets[a]; 		// Changing the location right to our current position to a letter.

				locX += 1; 					// Updating current location
				break;

			case 3: 						// Move 3 = Move down

				if (blocked[2] == 1){ 				// If we're blocked from moving down, we decrement 'a', and then break from the switch to reiterate the loop.
					a--; 					// The decrement allows us to stay on the same letter, and reiterating the loop generates another random move.
					break; 					//
				} 						//

				board[locY + 1][locX] = alphabets[a]; 		// Changing the location below our current position to a letter

				locY += 1; 	 				// Updating current location
				break;

			case 4: 						// Move 4 = Move left

				if (blocked[3] == 1){ 				// If we're blocked from moving left, we decrement 'a', and the break from the switch to reiterate the loop.
					a--; 					// The decrement allows us to stay on the same letter, and reiterating the loop generates another random move.
					break; 					//
				} 						//

				board[locY][locX - 1] = alphabets[a]; 		// Changing the location to the left of our current position to a letter.

				locX -= 1; 					// Updating current position
				break;
		}

	}


	for (int a = 0; a<10; a++){
		printf("\t\t\t\t\t");
		for(int b=0; b<10; b++)
			printf(" %c", board[a][b]);
		printf("\n");
	}

	return 0;
}
