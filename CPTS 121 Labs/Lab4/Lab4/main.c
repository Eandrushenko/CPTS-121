#include "header.h"

int main(void)
{
	int height = 0, weight = 0, gender = 0, age = 0, activity = 0, calories = 0;

	FILE * infile, * infile2, * outfile;

	infile = fopen("input.dat", "r");
	infile2 = fopen("input2.dat", "r");

	height = file_read(infile);
	weight = file_read(infile);
	gender = file_read(infile);
	age = file_read(infile);
	activity = file_read(infile);

	calories = calorie_calculator(weight, height, gender, activity, age);

	outfile = fopen("output.dat", "w");

	fprintf(outfile, "%d Calories required daily.\n ", calories);

	char answer1, answer2, answer3, answer4, answer5, answer6, answer7;
	int baseball_cash;

	printf("All Star (y/n): ");
	scanf(" %c", &answer1);

	printf("Season MVP (y/n): ");
	scanf(" %c", &answer2);

	printf("World Series MVP (y/n): ");
	scanf(" %c", &answer3);

	printf("Gold Glove (y/n): ");
	scanf(" %c", &answer4);

	printf("Silver Slugger (y/n): ");
	scanf(" %c", &answer5);

	printf("Homerun Champ (y/n): ");
	scanf(" %c", &answer6);

	printf("Batting Average Champ (y/n): ");
	scanf(" %c", &answer7);

	baseball_cash = baseball_count(answer1, answer2, answer3, answer4, answer5, answer6, answer7);

	fprintf(outfile,"Baseball bonus cash = $%d\n", baseball_cash);

	int num1, num2, num3, num4, num5, choice, end_result;

	num1 = file_read(infile2);
	num2 = file_read(infile2);
	num3 = file_read(infile2);
	num4 = file_read(infile2);
	num5 = file_read(infile2);

	printf("1. Find the Average:\n");
	printf("2. Find the Largest Number:\n");
	printf("3. Find the Smallest Number:\n");
	printf("Choose an option: ");
	scanf("%d", &choice);

	end_result = number_function(choice, num1, num2, num3, num4, num5);

	printf("%d\n", end_result);
}