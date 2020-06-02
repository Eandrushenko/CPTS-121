#include "header.h"

int sum_of_digits(int i)
{
	if (i < 10)
	{
		return i;
	}
	else
	{
		return i % 10 + sum_of_digits(i / 10);
	}
}

void towers(int number_disks, char frompeg, char topeg, char auxpeg)
{
	if (number_disks == 1)
	{
		printf("move disk 1 from peg %c to peg %c\n", frompeg, topeg);
		return;
	}

	towers(number_disks - 1, frompeg, auxpeg, topeg);

	printf("move disk %d from peg %c to peg %c \n", number_disks, frompeg, topeg);

	towers(number_disks - 1, auxpeg, topeg, frompeg);
}
