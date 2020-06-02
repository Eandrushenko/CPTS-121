/*******************************************************************************************

* Programmer: Elijah Andrushenko

* Class: CptS 121, Spring  2016; Lab Section 08

* Programming Assignment: PA 2

* Date: February 3rd, 2016

* Description: This program does various equations for the user. The user enters in numbers that are asked for and the program does the
calculations and outputs the answer to the problem.

* History: Entered in all the equations into the Equations.c source

*******************************************************************************************/
#include "Equations.h"


/*************************************************************
* Function: calculate_newtons_2nd_law                                     
* Date Created: 02/03/16                                  
* Date Last Modified: 02/03/16                                      
* Description: This program prompts the user for mass and acceleration and calculates the force.                                             
* Input parameters: mass and acceleration                              
* Returns: force                             
* Preconditions: prompts the user for data                          
* Postconditions: returns calculated data                                          
*************************************************************/
double calculate_newtons_2nd_law(double mass, double acceleration, double force)
{
	//Newton’s Second Law of Motion : force = mass * acceleration
	printf("Please enter the mass and acceleration <both floating-point values> for use in Newton's Second Law: ");
	scanf("%lf%lf", &mass, &acceleration);
	force = mass * acceleration;
	printf("Newton's Second Law: force = mass * acceleration = %lf * %lf = %lf\n\n", mass, acceleration, force);

	return 0;
}


/*************************************************************
* Function: calculate_volume_cylinder
* Date Created: 02/03/16
* Date Last Modified: 02/03/16
* Description: This program prompts the user for the radius and height and calculates the volume of the cylinder.
* Input parameters: radius and height
* Returns: volume of cylinder
* Preconditions: prompts the user for data
* Postconditions: returns calculated data
*************************************************************/
double calculate_volume_cylinder(double radius, double height, double volume_cylinder)
{
	//Volume of a cylinder: volume_cylinder = PI * radius^2 * height
	printf("Please enter the radius and height <both floating-point values> for use in a volume of cylinder equation: ");
	scanf("%lf%lf", &radius, &height);
	volume_cylinder = PI * pow(radius, 2) * height;
	printf("Volume of a cylinder: volume_cylinder = PI * radius^2 * height = %lf * %lf^2 * %lf = %lf\n\n", PI, radius, height, volume_cylinder);

	return 0;
}


/*************************************************************
* Function: perform_character_encoding
* Date Created: 02/03/16
* Date Last Modified: 02/03/16
* Description: This program prompts the user for a character and returns the calculations for that character.
* Input parameters: character
* Returns: character 2
* Preconditions: prompts the user for data
* Postconditions: returns calculated data
*************************************************************/
char perform_character_encoding(char character, char character2)
{
	//Character encoding: encoded_character = (plaintext_character - 'a') + 'A' (note: what happens if plaintext_character is lowercase?)
	printf("Please enter a character for the encoded character equation: ");
	scanf(" %c", &character);
	character2 = (character - 'a') + 'A';
	printf("Encoded character equation: encoded_character = (plaintext_character - 'a') + 'A' = (%c - a) + A = %c\n\n", character, character2);
	
	return 0;
}


/*************************************************************
* Function: calculate_gravity_force
* Date Created: 02/03/16
* Date Last Modified: 02/03/16
* Description: This program prompts the user for two masses and the distance to calculate the force.
* Input parameters: mass1, mass2, and distance
* Returns: force2
* Preconditions: prompts the user for data
* Postconditions: returns calculated data
*************************************************************/
double calculate_gravity_force(double mass1, double mass2, double distance, double force2)
{
	//Gravity: force = G * mass1 * mass2 / distance^2, where G is the gravitational constant with value 6.67 * 10^-11
	printf("Please enter the mass1, mass2, and the distance <all floating-point values> for use in the Gravity equation: ");
	scanf("%lf%lf%lf", &mass1, &mass2, &distance);
	force2 = G * (mass1 * mass2) / pow(distance, 2);
	printf("Gravity equation: force = G * mass1 * mass2 / distance^2, where G is the gravitational constant with the value 6.67 * 10^-11 = %.12lf * %lf * %lf / %lf^2 = %.12lf\n\n", G, mass1, mass2, distance, force2);

	return 0;
}


/*************************************************************
* Function: calculate_resistive_divider
* Date Created: 02/03/16
* Date Last Modified: 02/03/16
* Description: This program prompts the user for two resistances and a voltage input and it calculates the voltage output.
* Input parameters: r1, r2, vin
* Returns: vout
* Preconditions: prompts the user for data
* Postconditions: returns calculated data
*************************************************************/
double calculate_resistive_divider(double r1, double r2, double vin, double vout)
{
	//Resistive divider: vout = r2 / (r1 + r2) * vi
	printf("Please enter the voltage input, the first resistance, and the second resistance <all floating-point values> for use in the resistive divider equation: ");
	scanf("%lf%lf%lf", &vin, &r1, &r2);
	vout = r2 / (r1 + r2) * vin;
	printf("Resistive divider equtaion: Voltage output = resistance2 / (resistance1 + resistance2) * Voltage input = %lf / (%lf + %lf) * %lf = %lf\n\n", r2, r1, r2, vin, vout);

	return 0;
}


/*************************************************************
* Function: calculate_distance_between_2pts
* Date Created: 02/03/16
* Date Last Modified: 02/03/16
* Description: This program prompts the user for two points and finds the distanc between the two points.
* Input parameters:x1, x2, y1, y2
* Returns: distance
* Preconditions: prompts the user for data
* Postconditions: returns calculated data
*************************************************************/
double calculate_distance_between_2pts(double x1, double x2, double yy1, double y2, double distance2)
{
	#include <math.h>
	//Distance between two points: distance = square root of ((x1 - x2)^2 + (y1 - y2)^2) (note: you will need to use sqrt ( ) out of <math.h>)
	printf("Please enter x1, x2, y1, and y2 <all floating-point values> for use in the distance equation: ");
	scanf("%lf%lf%lf%lf", &x1, &x2, &yy1, &y2);
	distance2 = sqrt(pow((x1 - x2), 2) + pow((yy1 - y2), 2));
	printf("Distance equation: distance = square root of ((x1 - x2)^2 + (y1 - y2)^2) = square root of ((%lf - %lf)^2 + (%lf - %lf)^2) = %lf\n\n", x1, x2, yy1, y2, distance2);

	return 0;
}



/*************************************************************
* Function: calculate_general_equation
* Date Created: 02/03/16
* Date Last Modified: 02/03/16
* Description: This program prompts the user for specific variables and calculates them for you.
* Input parameters: a, x, and z
* Returns: y
* Preconditions: prompts the user for data
* Postconditions: returns calculated data
*************************************************************/
double calculate_general_equation(int a, double x, double z, double y)
{
	//General equation: y = (73 / 12) - x * z + a / (a % 2) (recall: a is an integer; the 73 and 12 constants in the equation should be left as integers initially, but explicitly type-casted as floating-point values)
	printf("Please enter values for x, z, and a <all integer values> for use in the general equation: ");
	scanf("%d%d%d", &x, &z, &a);
	y = (double)(73 / 12) - ((double)x * (double)z) + ((double)a / (double)(a % 2));
	printf("General equation: y = (73 / 12) - x * z + a / (a %% 2) = (73/12) - %d * %d + %d / (%d %% 2) = %d\n\n", x, z, a, a, y);

	return 0;
}