#include "header.h"

int main(void)
{
	int i = 0, sum = 0;

	printf("enter a number: ");
	scanf("%d", &i);

	sum = sum_of_digits(i);

	printf("The sum of your number is %d\n\n", sum);

	//Towers of Hanoi
	char frompeg = 'A', auxpeg = 'B', topeg = 'C';
	int number_disks = 3;

	towers(number_disks, frompeg, topeg, auxpeg);

	printf("\nTowers of Hanoi Solution Complete.\n\n");

	return 0;
}