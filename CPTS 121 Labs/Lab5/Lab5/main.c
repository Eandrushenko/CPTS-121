#include "header.h"

int main(void)
{
	double total = 0, current = 0;

	FILE *infile = fopen("salaries.txt", "r");

	while (!feof(infile))
	{
		fscanf(infile, "%lf", &current);
		total += current;
	}

	printf("total: %.2lf\n", total);

	tax_bracket(total);

	fclose(infile);

	//project #2

	FILE *infile2 = NULL;

	FILE *outfile2 = NULL;

	double total2 = 0, current2 = 0, counter = 0;

	infile2 = fopen("data.txt", "r");
	outfile2 = fopen("output.txt", "w");

	while (!feof(infile2))
	{
		fscanf(infile2, "%lf", &current2);
		total2 += current2;
		counter += 1;
	}

	total2 = total2 / counter;

	fprintf(outfile2, "Average of data.txt: %.2lf\n", total2);

	//project 3

	int number1 = 0, number2 = 0, remainder_num = 0;

	printf("please input 2 integers: ");
	scanf("%d%d", &number1, &number2);

	if (number1 < 0)
	{
		number1 = number1 * -1;
	}
	else if (number2 < 0)
	{
		number2 = number2 * -1;
	}

	remainder_num = find_remainder(number1, number2);

	printf("The greatest common divisor of %d and %d = %d\n\n", number1, number2, remainder_num);


	//part 4
	int number = 0, current_highest = 0, current_lowest = 0;

	FILE *infile4 = fopen("numbers.txt", "r");

	fscanf(infile4, "%d", &current_highest);
	current_lowest = current_highest;

	while (!feof(infile4))
	{
		fscanf(infile4, "%d", &number);

		if (number > current_highest)
		{
			current_highest = number;
		}
		else if (number < current_lowest)
		{
			current_lowest = number;
		}
	}

	printf("The largest number in numbers.txt = %d\n", current_highest);
	printf("The smallest number in numbers.txt = %d\n", current_lowest);

	return 0;

}