#include "header.h"

int is_prime(int sum)
{
	int i = 2;

	for (int i = 2; i <= sum / 2; i++)
	{
		if (sum % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int calculate_factorial(int n)
{
	int factorial = 1, one_less = 0, increment = 0;
	do
	{
		one_less = n - increment;
		factorial *= one_less;

		increment++;

	} while (increment < n);
	if (n == 0)
	{
		factorial = 1;
	}
	return factorial;
}


