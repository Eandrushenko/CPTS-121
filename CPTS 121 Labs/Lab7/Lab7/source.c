#include "header.h"

void charges(double hours, double *average, double *total)
{
	double ot_hours = 0;
	hours = ceil(hours);
	if (hours > 10)
	{
		ot_hours = hours - 10;
	}
	*total = 7.99;
	*total += ot_hours * 1.99;
	if (hours != 0)
	{
		*average = *total / hours;
	}
	else if (hours == 0)
	{
		*average = *total / 1;
	}
}

double round_money(double money)
{
	money *= 100;
	money += 0.5;
	money = (int)money;
	money /= 100;
	return money;
}

FILE *open_file(char *filename)
{
	printf("Filename: %s\n", filename);
}

double read_file(FILE *filename, double item)
{
	fscanf(filename, "%lf", &item);
	return item;
}

double revenue(int t)
{
	return 203.265 * pow(1.071, t);
}

int predict(double m)
{
	int i = 0;
	double prediction = 0.0;
	while (m > prediction)
	{
		prediction = revenue(i);
		i++;
		if (m > prediction)
		{
			i++;
		}
	}
	return i + 1984;
}