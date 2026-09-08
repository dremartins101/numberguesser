#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define TRUE -1
#define FALSE 0

int main(){
	srand(time(NULL));
	int keepGoing = TRUE;
	int correct, guess;
	int turnCount = 0;
	correct = rand();
	correct = (correct % 100) + 1;
	// debug
	//printf("Random #: %d \n", correct);

	char name[20];
	printf("Hi! What is your name? ");
	scanf("%s", name);
	printf("Nice to meet you %s. Let's play a game \n", name);

	while (keepGoing){
		turnCount++;
		printf("Turn %d", turnCount);
		printf(") Please guess a number: \n");
		scanf("%d", &guess);
		
		if (guess < correct){
			printf("too low \n");
		}
		if(guess > correct){
			printf("too high \n");
		}

		 

		if (guess == correct){
			keepGoing = FALSE;
			printf("That's a bingo!");
		 if (turnCount < 7){
			printf(" Great job!");
		} else if (turnCount > 7){
			printf(" You could have done better...");
		} else {
			printf(" Eh.");
		}
		} // end if (end of game)
	} // end while
	



return 0;
} // end main
