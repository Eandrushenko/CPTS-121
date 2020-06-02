#include "header.h"

int main(void)
{
	int x = 0;

	x = 25;
	printf("%d = ", x);
	printBits(x);

	x = x >> 4;
	printf("%d = ", x);
	printBits(x);
	printf("%\n\n");

	int num = 2, power = 2;
	x = power2(num, power);
	printf("%d^%d = ", num, power);
	printBits(x);
	printf("\n\n");

	int i = 0;
	char myChars[4] = { '\0' };
	unsigned int val = 0;
	for (i = 0; i < 4; i++)
	{
		scanf(" %c", &myChars[i]);
	}
	for (i = 0; i < 4; i++)
	{
		printCharbit(myChars[i]);
	}
	val = packCharacters(myChars);
	printUnsignedBits(val);

	return 0;
}