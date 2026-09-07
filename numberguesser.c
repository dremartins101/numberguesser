#include <stdio.h>
#include <string.h>
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
	printf("Random #: ", "%d", correct);

	char name[20];
	printf("Hi! What is your name? ");
	scanf("%s", name);
	printf("Nice to meet you ", "%s", name,". Let's play a game");
	
	while (keepGoing){
		turnCount++;
		printf("Turn %d", turnCount, ") Please guess a number: ");
		scanf("%d", guess);
		if (guess = correct){
			keepGoing = FALSE;
			printf("You got it! \n");
			if (turnCount > 7){
				printf("Amazing job!");
				else if (turncount = 7){
					printf("Eh.");
					} // end else if
		       		else {
					printf("You could have done better.");
					} // end else
			} // end if (guess = correct)



	return 0;
} // end main
