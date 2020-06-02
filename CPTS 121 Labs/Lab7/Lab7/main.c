#include "header.h"

int main(void)
{
	double hours1 = 0, hours2 = 0;
	int month1 = 0, year1 = 0, month2 = 0, year2 = 0;
	FILE *infile;
	double total = 0.0, average = 0.0;



	infile = open_file("data.txt");

	infile = fopen("data.txt", "r");

	month1 = read_file(infile, month1);
	year1 = read_file(infile, year1);
	hours1 = read_file(infile, hours1);
	month2 = read_file(infile, month2);
	year2 = read_file(infile, year2);
	hours2 = read_file(infile, hours2);


	charges(hours1, &average, &total);
	charges(hours2, &average, &total);

	total = round_money(total);
	average = round_money(average);

	printf("On %d %d, Hours spent were: %.2lf\n", month1, year1, hours1);
	printf("On %d %d, Hours spent were: %.2lf\n", month2, year2, hours2);
	printf("The total cost so far is $%.2lf and the average cost per hour is $%.2lf\n\n\n", total, average);


	double money = 0.0;
	int prediction = 1984;

	printf("Enter the revenue: ");
	scanf("%lf", &money);

	money = revenue(money);
	prediction = predict(money);

	printf("%d\n", prediction);
	





	return 0;
}