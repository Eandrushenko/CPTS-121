/*******************************************************************************************

* Programmer: Elijah Andrushenko                                                                       *

* Class: CptS 121, Spring  2016; Lab Section 08                                           *

* Programming Assignment: Lab1 Task 2 Part B                                                    *

* Date: January 22, 2016                                                                          *

* Description: This program lets the user calculate Ohm's Law      *

*******************************************************************************************/
#include <stdio.h>
#include <math.h>
int main(void)
{
	//Ohm's Law : V = IR
	int current = 0, resistance = 0, voltage = 0;
	printf("Current: ");
	scanf("%d", &current);
	printf("Resistance: ");
	scanf("%d", &resistance);

	voltage = current * resistance;
	printf("Voltage = %d\n\n", voltage);

	//Joule's Law : P = (V^2) / R
	int power = 0, voltage2 = 0, resistance2 = 0;
	printf("Voltage: ");
	scanf("%d", &voltage2);
	printf("Resistance: ");
	scanf("%d", &resistance2);

	power = pow(voltage2, 2) / resistance2;
	printf("%d\n\n", power);
}
