#include "header.h"

int main(void)
{
	int n = 0, count = 0, memory = 0;

	printf("The Collatz Conjecture\nRule: Choose any number n , if n is even then n/2. If n is odd then 3n + 1.\nn will always turn into 1, no matter what number you choose.\n\n");
	printf("Enter a number: ");
	scanf("%d", &n);

	memory = n;

	printf("%d\n", n);

	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = evens(n);
		}
		else
		{
			n = odds(n);
		}
		count += 1;
	}

	if (count != 1)
	{
		printf("The number of steps it takes for the number %d to get to 1 is %d steps.\n", memory, count);
	}
	else
	{
		printf("The number of steps it takes for the number %d to get to 1 is %d step.\n", memory, count);
	}

	return 0;
}