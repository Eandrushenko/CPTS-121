#include "header.h"

int main(void)
{
	int sum = 0, result = 0;

	printf("Enter a number to check if it's prime: ");
	scanf("%d", &sum);

	result = is_prime(sum);

	if (result == 1)
	{
		printf("%d is a prime number! \n\n", sum);
	}
	else
	{
		printf("%d is not a prime number! \n\n", sum);
	}

	int fact1 = 0, fact2 = 0;

	printf("Enter a number so we can find its factorial: ");
	scanf("%d", &fact2);

	fact1 = calculate_factorial(fact2);
	printf("The factorial of %d = %d \n\n", fact2, fact1);

	int first_number = 0, second_number = 1, next_number = 0, n = 0;

	printf("Enter the term you wish to find in the Fibonacci Sequence: ");
	scanf("%d", &n);

	if (n == 1)
	{
		printf("%d", first_number);
	}
	else if (n == 2)
	{
		printf("%d", second_number);
	}
	else
	{
		n = n - 2;
		while (n > 0)
		{
			next_number = first_number + second_number;
			first_number = second_number;
			second_number = next_number;
			n--;
		}
		printf("%d\n\n", next_number);
	}






	return 0;
}