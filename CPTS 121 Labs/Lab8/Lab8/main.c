#include "header.h"

int main(void)
{
	FILE *infile = NULL;
	int number = 0, i = 0;
	int myArray[NUMELEMS];

	infile = fopen("numbers.txt", "r");

	for (i = 0; i < NUMELEMS; i++)
	{
		fscanf(infile, "%d", &number);
		myArray[i] = number;
	}
	reverse_array(myArray);
	printf("\n\n");
	
	//Assignment #2
	int Arr[20] = { 0, 0, 0, 0, 0 };
	int Arr2[101] = { 0, 0, 0, 0, 0 };

	srand((unsigned int)time(NULL));

	populateRandomArray(Arr);
	recordFrequency(Arr2, Arr);
	printFrequencyArray(Arr2);
	printf("\n\n");

	//Assingment #3
	char word[] = "spring";
	char guessed[7] = { '*', '*', '*', '*', '*', '*' };
	char incorrect_guess = 0;
	char c;
	int w = 0;

	printArray(word);
	printArray(guessed);

	while (incorrect_guess < 6 && completedWord(guessed) != 0)
	{
		printf("your word: ");
		printArray(guessed);
		printf("Guesses left: %d\n", 6 - incorrect_guess);

		printf("Enter a character to guess: ");
		scanf("%c", &c);
		if (checkContains(c, word) == 0)
		{
			incorrect_guess++;
		}
		else
		{
			for (w = 0; word[w] != '\0'; w++)
			{
				if (word[w] == c)
				{
					guessed[w] = c;
				}
			}
		}
	}

	if (incorrect_guess >= 6)
	{
		printf("You failed\n");
	}
	else
	{
		printf("You guessed the word\n");
	}


	return 0;
}