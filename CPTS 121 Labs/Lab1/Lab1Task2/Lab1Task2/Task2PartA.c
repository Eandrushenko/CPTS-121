/*******************************************************************************************

* Programmer: Elijah Andrushenko                                                                       *

* Class: CptS 121, Spring  2016; Lab Section 08                                           *

* Programming Assignment: Lab1 Task2                                             *

* Date: January 22, 2016                                                                          *

* Description: This program adds, subtracts, and does various things to two numbers.      *

*******************************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
	//Naming variables
	int number1_int = 0, number2_int = 0, int_result = 0;
	double number1_float = 0, number2_float = 0, float_result;

	//Adding integers
	printf("Enter int 1: \n");
	scanf("%d", &number1_int);
	printf("Enter int 2: \n");
	scanf("%d", &number2_int);

	int_result = number1_int + number2_int;
	printf("%d\n\n", int_result);

	//Subtracting integers
	printf("Enter int 1: \n");
	scanf("%d", &number1_int);
	printf("Enter int 2: \n");
	scanf("%d", &number2_int);

	int_result = number1_int - number2_int;
	printf("%d\n\n", int_result);

	//Multiplying integers
	printf("Enter int 1: \n");
	scanf("%d", &number1_int);
	printf("Enter int 2: \n");
	scanf("%d", &number2_int);

	int_result = number1_int * number2_int;
	printf("%d\n\n", int_result);

	//Dividing integers into doubles
	printf("Enter int 1: \n");
	scanf("%d", &number1_int);
	printf("Enter int 2: \n");
	scanf("%d", &number2_int);

	float_result = number1_int / number2_int;
	printf("%lf\n\n", float_result);

	//Casting integers are doubles
	printf("Enter float 1: \n");
	scanf("%lf", &number1_float);
	printf("Enter int 2: \n");
	scanf("%d", &number2_int);

	float_result = number1_float / number2_int;
	printf("%lf\n\n", float_result);

	//Modulus on doubles
	printf("Enter float 1: \n");
	scanf("%lf", &number1_float);
	printf("Enter float 2: \n");
	scanf("%lf", &number2_float);

	float_result = (int)number1_float % (int)number2_float;
	printf("%d\n\n", float_result);

	//Finding if numbers are even or odd
	printf("Enter int 1: \n");
	scanf("%d", &number1_int);
	printf("Enter int 2: \n");
	scanf("%d", &number2_int);

	int_result = number1_int % 2;
	printf("%d\n", int_result);
	int_result = number2_int % 2;
	printf("%d\n", int_result);
	printf("If the number below is 0 then your number is even if it is 1 then it is odd. \n");
	

	




}

