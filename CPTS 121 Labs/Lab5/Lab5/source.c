#include "header.h"

int tax_bracket(double salaries)
{
	if (salaries < 15000)
	{
		printf("Low Income\n\n");
	}
	else if (salaries >= 15000 && salaries <= 200000)
	{
		printf("Medium Income\n\n");
	}
	else if (salaries > 200000)
	{
		printf("High Income\n\n");
	}
}

int find_remainder(int num1, int num2)
{
	int remainder_num = 0;
	do
	{
		remainder_num = num1 % num2;
		num1 = num2;
		num2 = remainder_num;
	} while (remainder_num != 0);
	return num1;
}