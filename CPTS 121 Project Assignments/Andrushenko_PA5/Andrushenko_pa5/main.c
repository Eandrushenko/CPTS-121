/*******************************************************************************************

* Programmer: Elijah Andrushenko

* Class: CptS 121, Spring  2016; Lab Section 08

* Programming Assignment: PA5

* Date: March 12th, 2016

* Description: This program simulates playing the game Yahtzee.

* History: 3/06/16 Set up basic variables and functions like the menu functions
3/09/16 Created an array and function that rolls all dice and a function that rolls specific dice
2/12/16 Finished the project, attempted to get the scoring to not repeat and added a computer that adds a score along with your turns.
		Displays who won, lost, or if you tied.

*******************************************************************************************/

#include "header.h"

int main(void)
{
	//Used for random number generation
	srand(time(NULL));

	//Arrays
	int dice[5] = { 0 };
	int point[13] = { 0 };

	//Variables
	int point_count = point[0] + point[1] + point[2] + point[3] + point[4] + point[5] + point[6] + point[7] + point[8] + point[9] + point[10] + point[11] + point[12],
		option = 0,
		rolls = 0,
		choice = -1,
		reroll = 0,
		reroll_amount = 0,
		reroll_count = 0,
		value = -1,
		total = 0,
		subtotal = 0,
		computer = 0;



	//Begin Program
	option = run_menu();

	option = determine_operation(option);

	if (option == PLAY)
	{

		while (point_count != 13)
		{
			pause_function();
			roll_dice(dice, 5);
			print_dice(dice);
			rolls = roll_count(rolls);

			if ((rolls < 3) && (choice != 0))
			{
				printf("Would you like to reroll or select a point?\nEnter 1 to reroll or 0 to enter a point: ");
				scanf("%d", &choice);
				
				if (choice == 1)
				{
					printf("Enter how many dice do you wish to reroll: ");
					scanf("%d", &reroll_amount);
					while (reroll_count < reroll_amount)
					{
						printf("Enter a dice that you wish to reroll: ");
						scanf("%d", &reroll);
						reroll_dice(dice, reroll);
						reroll_count += 1;
					}
					reroll_count = 0;
					system("cls");
					pause_function();
					print_dice(dice);
					rolls = roll_count(rolls);
				}
				else if (choice == 0)
				{
					system("cls");
					sort(dice, 5);
					print_dice(dice);
					point_values();
					printf("Choose one of the point values: ");
					scanf("%d", &value);
					total = no_repeat(point, total);
					subtotal = compute_subtotal(dice, point, value, subtotal);
					total = compute_score(dice, point, value, total);
					computer = computer_score(computer);
					printf("Total = %d\n", total);
					printf("Subtotal = %d\n", subtotal);
					printf("Computer Total = %d\n", computer);
					rolls = 0;
					point_count += 1;

				}
			}
			if (rolls >= 3)
			{
				system("cls");
				sort(dice, 5);
				print_dice(dice);
				point_values();
				printf("Choose one of the point values: ");
				scanf("%d", &value);
				total = no_repeat(point, total);
				subtotal = compute_subtotal(dice, point, value, subtotal);
				total = compute_score(dice, point, value, total);
				computer = computer_score(computer);
				printf("Total = %d\n", total);
				printf("Subtotal = %d\n", subtotal);
				printf("Computer Total = %d\n", computer);
				rolls = 0;
				point_count += 1;
			}
		}

	}
	if (total > 0)
	{
		if (subtotal >= 63)
		{
			subtotal += 35;
			printf("You get a bonus 35 points to your score since your subtotal exceeded 63 points.");
		}
		total += subtotal;

		if (total > computer)
		{
			printf("Congrats! You beat the computer at Yahtzee!\n");
			printf("Final score: You: %d  Computer: %d\n", total, computer);
		}
		else if (total < computer)
		{
			printf("Oh no! You lost to the computer at Yahtzee.\n");
			printf("Final score: You: %d  Computer: %d\n", total, computer);
		}
		else
		{
			printf("Wow! You tied the computer at Yahtzee!\n");
			printf("Final score: You: %d  Computer: %d\n", total, computer);
		}
	}

	return 0;
}