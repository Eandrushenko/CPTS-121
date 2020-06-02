#include <stdio.h>
#include <math.h>

int main(void)
{
	
	//Calculations for a straight line
	double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0;
	double m = 0.0, m_pb = 0.0, x3 = 0.0, y3 = 0.0, b = 0.0;

	printf("Please enter the coordinates of a point: ");
	scanf("%lf%lf", &x1, &y1);
	printf("Please enter the coordinates of another point: ");
	scanf("%lf%lf", &x2, &y2);

	m = (y2 - y1) / (x2 - x1);

	printf("Slope of your line: %.2lf\n", m);

	x3 = (x1 + x2) / 2;
	y3 = (y1 + y2) / 2;

	printf("The midpoint of your line is: %.2lf, %.2lf\n", x3, y3);

	m_pb = -1 / m;

	printf("The slope of the perpendicular bisector is: %.2lf\n", m_pb);

	b = y3 - (m_pb * x3);

	printf("The Y-intercept of the perpendicular bisector is: %.2lf\n", b);

	printf("Point 1 = (%.2lf, %.2lf), Point 2 = (%.2lf, %.2lf)\n", x1, y1, x2, y2);
	printf("y = %.2lf*x + %.2lf\n\n\n", m_pb, b);
	
	//Body Mass Index Calculator
	double bmi = 0.0, height_feet = 0.0, height_inches = 0.0, weight = 0.0, height_total = 0.0;

	printf("Please enter your height in feet and inches: ");
	scanf("%lf%lf", &height_feet, &height_inches);
	
	printf("Please enter your weight in pounds: ");
	scanf("%lf", &weight);

	height_total = (height_feet * 12) + height_inches;
	bmi = (weight / (height_total * height_total)) * 703;

	printf("Your Body Mass Index is: %lf\n\n\n", bmi);

	//Bowl Championship Series Calculator
	double bcs_score = 0.0, coaches_poll = 0.0, harris_poll = 0.0, cpu_rank = 0.0;
	double hp = 0.0, cp = 0.0;

	printf("Please enter the Harris poll ranking (A number between 1 and 2850): ");
	scanf("%lf", &harris_poll);
	printf("Please enter the Coaches' poll ranking (A number between 1 and 1475): ");
	scanf("%lf", &coaches_poll);
	printf("Please enter the Computer ranking (A number between 0 and 1): ");
	scanf("%lf", &cpu_rank);

	hp = harris_poll / 2850;
	cp = coaches_poll / 1475;
	bcs_score = (hp + cp + cpu_rank) / 3;

	printf("The BCS rank for this team is: %.2lf\n\n\n", bcs_score);

	return 0;
}