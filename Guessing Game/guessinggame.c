#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Created on 1/16/2025 by Kyle Shott

int main() {
	printf("Welcome to the guessing game. Press enter to begin.\n");
	getchar();

	srand(time(NULL));

	char difficulty[10];
	int number = rand() % 10 + 1;
	int guesses;
	int guessnumber;

	printf("Select difficulty (easy, medium or hard): ");
	scanf("%s", difficulty);

	if (strcmp(difficulty, "easy") == 0) {
		guesses = 6;
	} else if (strcmp(difficulty, "medium") == 0) {
		guesses = 4;
	} else if (strcmp(difficulty, "hard") == 0) {
		guesses = 2;
	} else {
		printf("Invalid difficulty selection!\n");
		return 1;
	}

	while(guesses > 0) {
		printf("Guess a number between 0 and 10: ");
		scanf("%d", &guessnumber);

		if (guessnumber == number) {
			printf("Congratulations! You guessed correctly! The number was %d. Thanks for playing!\n", number);
			system("pause");
			exit(0);
		} else if(guessnumber > number) {
			printf("Too high!\n");
		} else {
			printf("Too low!\n");
		}

		guesses -= 1;
	}

	printf("Sorry, but you are out of guesses. The number was %d. Thanks for playing!\n", number);
	system("pause");

}




	


