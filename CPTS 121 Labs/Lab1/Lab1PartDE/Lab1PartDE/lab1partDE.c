/*******************************************************************************************

* Programmer: Elijah Andrushenko                                                                      *

* Class: CptS 121, Spring  2016; Lab Section 08                                          *

* Programming Assignment: Lab1 Part D and E                                                     *

* Date: January 22, 2016                                                                          *

* Description: This program Solves complex equations so that you dont have to.      *

*******************************************************************************************/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void)
{
	// equation: 3 * ax^3 + (1/4) * bx^2 + 10 * cx + (-5) * d
	//make variables
	int a = 0, b = 0, c = 0, d = 0, x = 0, y = 0;
	printf("Input A,B,C,D, and X: ");
	scanf("%d%d%d%d%d",&a, &b, &c, &d, &x);

	y = 3 * a * (pow(x, 3)) + 0.25 * b * (pow(x, 2)) + 10 * c * x + (-5) * d;
	printf("Y = %d\n", y);

	int circumference = 0, radius = 0;

	printf("radius: ");
	scanf("%d", &radius);

	circumference = PI * (radius * radius);
	printf("Circumference = %d\n", circumference);




}