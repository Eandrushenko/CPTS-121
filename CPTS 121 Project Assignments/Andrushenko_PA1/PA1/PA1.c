/*******************************************************************************************

* Programmer: Elijah Andrushenko                                                                       

* Class: CptS 121, Spring  2016; Lab Section 08                                           

* Programming Assignment: PA1                                             

* Date: January 24, 2016                                                                          

* Description: This program does various equations for the user. The user enters in numbers that are asked for and the program does the
			   calculations and outputs the answer to the problem.

*History: 01/24/2016 : Started to create the program, and successfully created Newton's Second Law of Motion and the Cylinder calculator.

		  01/25/2016 : Created the plaintext and encoded character calculator. Also created the Gravity calculator and the Resistive
					   Divider calculator. Created the distance between two points calculator. Worked on the general equation calculator
					   but it still needs work with floats as it's numbers are still represented by integers rather than floats.

		  01/26/2016 : Fixed the Gravitational constant using .12lf so that it doesn't look like a zero, As well as the answer.


*******************************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.141592
#define G 6.67*pow(10, -11)

int main(void)
{
	//Newton’s Second Law of Motion : force = mass * acceleration
	double force = 0.0, mass = 0.0, acceleration = 0.0;
	
	printf("Please enter the mass and acceleration <both floating-point values> for use in Newton's Second Law: ");
	scanf("%lf%lf", &mass, &acceleration);
	force = mass * acceleration;
	printf("Newton's Second Law: force = mass * acceleration = %lf * %lf = %lf\n\n", mass, acceleration, force);

	//Volume of a cylinder: volume_cylinder = PI * radius^2 * height
	double volume_cylinder = 0.0, radius = 0.0, height = 0.0;

	printf("Please enter the radius and height <both floating-point values> for use in a volume of cylinder equation: ");
	scanf("%lf%lf", &radius, &height);
	volume_cylinder = PI * pow(radius, 2) * height;
	printf("Volume of a cylinder: volume_cylinder = PI * radius^2 * height = %lf * %lf^2 * %lf = %lf\n\n", PI, radius, height, volume_cylinder);

	//Character encoding: encoded_character = (plaintext_character - 'a') + 'A' (note: what happens if plaintext_character is lowercase?)
	char character = '\0', character2 = 'A';

	printf("Please enter a character for the encoded character equation: ");
	scanf(" %c", &character);
	character2 = (character - 'a') + 'A';
	printf("Encoded character equation: encoded_character = (plaintext_character - 'a') + 'A' = (%c - a) + A = %c\n\n", character, character2);

	//Gravity: force = G * mass1 * mass2 / distance^2, where G is the gravitational constant with value 6.67 * 10^-11
	double force2 = 0.0, mass1 = 0.0, mass2 = 0.0, distance = 0.0;

	printf("Please enter the mass1, mass2, and the distance <all floating-point values> for use in the Gravity equation: ");
	scanf("%lf%lf%lf", &mass1, &mass2, &distance);
	force2 = G * (mass1 * mass2) / pow(distance, 2);
	printf("Gravity equation: force = G * mass1 * mass2 / distance^2, where G is the gravitational constant with the value 6.67 * 10^-11 = %.12lf * %lf * %lf / %lf^2 = %.12lf\n\n", G, mass1, mass2, distance, force2);

	//Resistive divider: vout = r2 / (r1 + r2) * vin
	double vout = 0.0, r1 = 0.0, r2 = 0.0, vin = 0.0;

	printf("Please enter the voltage input, the first resistance, and the second resistance <all floating-point values> for use in the resistive divider equation: ");
	scanf("%lf%lf%lf", &vin, &r1, &r2);
	vout = r2 / (r1 + r2) * vin;
	printf("Resistive divider equtaion: Voltage output = resistance2 / (resistance1 + resistance2) * Voltage input = %lf / (%lf + %lf) * %lf = %lf\n\n", r2, r1, r2, vin, vout);

	//Distance between two points: distance = square root of ((x1 - x2)^2 + (y1 - y2)^2) (note: you will need to use sqrt ( ) out of <math.h>)
	double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, distance2 = 0.0;

	printf("Please enter x1, x2, y1, and y2 <all floating-point values> for use in the distance equation: ");
	scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);
	distance2 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	printf("Distance equation: distance = square root of ((x1 - x2)^2 + (y1 - y2)^2) = square root of ((%lf - %lf)^2 + (%lf - %lf)^2) = %lf\n\n", x1, x2, y1, y2, distance2);

	//General equation: y = (73 / 12) - x * z + a / (a % 2) (recall: a is an integer; the 73 and 12 constants in the equation should be left as integers initially, but explicitly type-casted as floating-point values)
	int y = 0, x = 0, z = 0, a = 0;
	printf("Please enter values for x, z, and a <all integer values> for use in the general equation: ");
	scanf("%d%d%d", &x, &z, &a);
	y = (double) (73 / 12) - ((double) x * (double) z) + ((double) a / (double) (a % 2));
	printf("General equation: y = (73 / 12) - x * z + a / (a %% 2) = (73/12) - %d * %d + %d / (%d %% 2) = %d\n\n", x, z, a, a, y);

	return 0;

}