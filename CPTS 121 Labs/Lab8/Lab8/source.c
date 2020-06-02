#include "header.h"

void print_array(int myArray[])
{
	int i = 0;

	printf("[");
	for (i = 0; i < NUMELEMS; i++)
	{
		if (i == NUMELEMS - 1)
		{
			printf("%d]\n", myArray[i]);
		}
		else
		{
			printf("%d,", myArray[i]);

		}
	}
}

void reverse_array(int myArray[])
{
	int i = 0, j = NUMELEMS - 1, temp = 0;
	printf("Before the reverse:\n");
	print_array(myArray);

	while (i < j)
	{
		temp = myArray[j];
		myArray[j] = myArray[i];
		myArray[i] = temp;
		i++;
		j--;
	}
	printf("After the reverse:\n");
	print_array(myArray);
}

populateRandomArray(int Arr[])
{
	printf("Array of 20 Random Integers:\n");
	for (int index = 0; index < 20; index++)
	{
		Arr[index] = (rand() % 100) + 1;
		printf("Array[%d}; %d\n", index, Arr[index]);
	}
}

void recordFrequency(int Arr_2[], int Arr[])
{
	for (int index = 0; index < 20; index++)
	{
		Arr_2[Arr[index]]++;
	}
}

void printFrequencyArray(int Arr_2[])
{
	printf("Frequency Array:\n");
	for (int index = 0; index < 101; index++)
	{
		printf("Number %d was generated %d time(s)\n", index, Arr_2[index]);
	}
}

void printArray(char Arr[])
{
	int i = 0;
	printf("Your array: ");
	for (i = 0; Arr[i] != '\0'; i++)
	{
		printf("%c", Arr[i]);
	}
	printf("\n");
}

int completedWord(char Arr[])
{
	int i = 0;
	int count = 0;
	for (i = 0; Arr[i] != '\0'; i++)
	{
		if (Arr[i] == '*')
		{
			count++;
		}
	}
	return count;
}

int checkContains(char c, char Arr[])
{
	int i = 0;
	for (i = 0; Arr[i] != '\0'; i++)
	{
		if (Arr[i] == c)
		{
			return 1;
		}
	}
	return 0;
}