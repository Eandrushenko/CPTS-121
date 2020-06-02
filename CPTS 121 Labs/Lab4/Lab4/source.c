#include "header.h"

int calorie_calculator(int weight, int height, int gender, int activity, int age)
{
	double bmr, calories;
	if (gender == 1)
	{
		bmr = 66 + (6.23 * weight) + (12.7 * height) - (6.8 * age);
		if (activity == 1)
		{
			calories = bmr * 1.2;
		}
		else if (activity == 2)
		{
			calories = bmr * 1.375;
		}
		else if (activity == 3)
		{
			calories = bmr * 1.55;
		}
		else if (activity == 4)
		{
			calories = bmr * 1.725;
		}
		else if (activity == 5)
		{
			calories = bmr * 1.9;
		}
	}
	else if (gender == 0)
	{
		bmr = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
		if (activity == 1)
		{
			calories = bmr * 1.2;
		}
		else if (activity == 2)
		{
			calories = bmr * 1.375;
		}
		else if (activity == 3)
		{
			calories = bmr * 1.55;
		}
		else if (activity == 4)
		{
			calories = bmr * 1.725;
		}
		else if (activity == 5)
		{
			calories = bmr * 1.9;
		}
	}
	return calories;
}

int file_read(FILE *infile)
{
	int number = 0;

	fscanf(infile, " %d", &number);
	return number;
}


int baseball_count(char answer1, char answer2, char answer3, char answer4, char answer5, char answer6, char answer7)
{
	int total = 0;
	if (answer1 == 'y')
	{
		total += 25000;
	}
	if (answer2 == 'y')
	{
		total += 75000;
	}
	if (answer3 == 'y')
	{
		total += 100000;
	}
	if (answer4 == 'y')
	{
		total += 50000;
	}
	if (answer5 == 'y')
	{
		total += 35000;
	}
	if (answer6 == 'y')
	{
		total += 25000;
	}
	if (answer7 == 'y')
	{
		total += 25000;
	}

	return total;
}

int number_function(int choice, int num1, int num2, int num3, int num4, int num5)
{
	int result;
	if (choice == 1)
	{
		result = num1 + num2 + num3 + num4 + num5;
		result = result / 5;
		return result;
	}
	int max = num1;
	if (choice == 2)
	{
		if (num1 > max)
		{
			num1 = max;
		}
		if (num2 > max)
		{
			num2 = max;
		}
		if (num3 > max)
		{
			num3 = max;
		}
		if (num4 > max)
		{
			num4 = max;
		}
		if (num5 > max)
		{
			num5 = max;
		}
	return max;
	}
	int min = num1;
	if (choice == 3)
	{
		if (num1 < min)
		{
			num1 = min;
		}
		if (num2 < min)
		{
			num2 = min;
		}
		if (num3 < min);
		{
			num3 = min;
		}
		if (num4 < min)
		{
			num4 = min;
		}
		if (num5 < min)
		{
			num5 = min;
		}
	return min;
	}
}
