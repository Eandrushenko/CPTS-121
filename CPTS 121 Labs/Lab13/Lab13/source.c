#include "header.h"

void printBits(int x)
{
	int i = 0;

	for (i = 31; i >= 0; i--)
	{
		if ((1 << i) & x)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
	return;
}

void printUnsignedBits(unsigned int x)
{
	int i = 0;

	for (i = 31; i >= 0; i--)
	{
		if ((1 << i) & x)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
	return;
}

int power2(int number, int pow)
{
	return number * (1 << pow-1);
}

unsigned int packCharacters(char myChars[])
{
	unsigned int val = myChars[0];
	val = val << 8;
	val = val | myChars[1];
	val = val << 8;
	val = val | myChars[2];
	val = val << 8;
	val = val | myChars[3];
	return val;
}

void printCharbit(char c)
{
	int i = 0;
	printf("%c:\t", c);
	for (i = 7; i >= 0; i--)
	{
		if ((1 << i) & c)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}