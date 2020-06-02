/*******************************************************************************************

* Programmer: Elijah Andrushenko

* Class: CptS 121, Spring  2016; Lab Section 08

* Programming Assignment: PA7

* Date: April 4th, 2016

* Description: This program helps you fine tune your addition, subtraction, multiplication, and division skills.

* History: 04/15/16 Created level 1, 2, and 3 functions
04/18/16 Created level 4 and 5 functions and started the menu functions
04/20/16 Finished the menu functions and completed the program

*******************************************************************************************/

#include "header.h"

int main(void)
{
	srand((unsigned int)time(NULL));

	int score = 0, count = 0, total = 0, initalized_score = 0, quit = 1;

	score = main_menu();
	
	if (score == 1000)
	{
		quit = 0;
	}

	initalized_score = score;

	while (quit == 1)
	{
		printf("Total Score: %d\n", total);
		if (score < 10)
		{
			while (count < 10)
			{
				level1(&score);
				count += 1;
			}
		}
		else if (score < 30 && score >= 10)
		{
			while (count < 10)
			{
				level2(&score);
				count += 1;
			}
		}
		else if (score < 60 && score >= 30)
		{
			while (count < 10)
			{
				level3(&score);
				count += 1;
			}
		}
		else if (score < 110 && score >= 60)
		{
			while (count < 10)
			{
				level4(&score);
				count += 1;
			}
		}
		else if (score >= 110)
		{
			while (count < 10)
			{
				level5(&score);
				count += 1;
			}
		}

		total = score - initalized_score;
		count = 0;
		system("pause");
		system("cls");
		printf("Enter a 1 to continue and a 0 to quit: ");
		scanf("%d", &quit);
		system("pause");
		system("cls");


	}

	printf("Your final score: %d\n", total);

	return 0;
}