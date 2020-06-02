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

/*************************************************************
* Function: display_menu()
* Date Created: 03/06/16
* Date Last Modified: 03/06/16
* Description: This function serves as the title of the program
* Input parameters: N/A
* Returns: A string of characters
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void display_menu(void)
{
	printf("Welcome to Yahtzee!\n");
	printf("1. Print game rules\n");
	printf("2. Start a game of Yahtzee\n");
	printf("3. Exit\n");
}

/*************************************************************
* Function: get_option()
* Date Created: 03/06/16
* Date Last Modified: 03/06/16
* Description: This function reads in the option presented by the title
* Input parameters: N/A
* Returns: option
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int get_option(void)
{
	int option = 0;
	scanf("%d", &option);
	return option;
}

/*************************************************************
* Function: is_valid()
* Date Created: 03/06/16
* Date Last Modified: 03/06/16
* Description: This function makes sure the entry is valid
* Input parameters: option
* Returns: status
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_valid(int option)
{
	int status = 1;
	if ((option < 1) || (option > 3))
	{
		status = 0;
	}
	return status;
}


/*************************************************************
* Function: run_menu()
* Date Created: 03/06/16
* Date Last Modified: 03/06/16
* Description: This function makes connects the other functions to make a working menu
* Input parameters: N/A
* Returns: option
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int run_menu(void)
{
	int status = 0, option = 0;
	do
	{
		display_menu();
		option = get_option();
		status = is_valid(option);
	} while (status == 0);
	return option;
}

/*************************************************************
* Function: determine_option()
* Date Created: 03/06/16
* Date Last Modified: 03/06/16
* Description: This function we learned in class as a way to navigate menus
* Input parameters: option
* Returns: option
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int determine_operation(int option)
{
	switch (option)
	{
	case RULES: 
		system("cls");
		display_rules();
		option = run_menu();
		determine_operation(option);
		break;

	case PLAY: 
		system("cls");
		
		break;

	default:
		system("cls");
		printf("Goodbye. ");
		break;
	}
	return option;
}


/*************************************************************
* Function: display_rules()
* Date Created: 03/06/16
* Date Last Modified: 03/06/16
* Description: This function displays the rules of the game
* Input parameters: N/A
* Returns: Strings of characters
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void display_rules(void)
{
	printf(".:+ RULES +:.\n");
	printf("1. The object of the game is to roll 5 dice\nand to choose one of the thirteen categories that will yeild the most points.\n");
	printf("2. You have to choose a category even if it doesn't yield any points.\n");
	printf("3. The game ends when all thirteen categories have been chosen.\n");
	printf("4. You have three rolls per turn.\n");
	printf("5. You can hold any of your six dice per roll.\n");
	printf("6. When your subtotal exceeds 63 you receive a 35 point bonus.\n");
	printf("7. The winner is whoever has the highest point total at the end of the game.\n");
	printf("8. The point values are listed below:\n");
	printf("Three of a kind = The sum of all 5 dice\n");
	printf("Four of a kind = The sum of all 5 dice\n");
	printf("Full House = 25 points\n");
	printf("Small straight = 30 points\n");
	printf("Large straight = 40 points\n");
	printf("Yahtzee = 50 points\n");
	printf("One through Sixes = The sum of the dice to their respective number chosen\n");
	printf("Chance = The sum of all 5 dice\n\n\n");
}


/*************************************************************
* Function: point_values()
* Date Created: 03/09/16
* Date Last Modified: 03/09/16
* Description: This function displays the possible choices for scoring in Yahtzee
* Input parameters: N/A
* Returns: Strings of characters
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void point_values(void)
{
	printf("1. Sum of 1's        7. Three-of-a-kind\n");
	printf("2. Sum of 2's        8. Four-of-a-kind\n");
	printf("3. Sum of 3's        9. Full house\n");
	printf("4. Sum of 4's        10. Small straight\n");
	printf("5. Sum of 5's        11. Large straight\n");
	printf("6. Sum of 6's        12. Yahtzee\n");
	printf("           13. Chance\n");
}

/*************************************************************
* Function: pause_function()
* Date Created: 03/09/16
* Date Last Modified: 03/09/16
* Description: This function rolls the dice and prompts the user to continue
* Input parameters: N/A
* Returns: A string of characters
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void pause_function(void)
{
	printf("\nRolling Dice. ");
	system("pause");
}

/*************************************************************
* Function: roll_dice()
* Date Created: 03/09/16
* Date Last Modified: 03/09/16
* Description: This function rolls the dice and prompts the user to continue
* Input parameters: *dice, size
* Returns: Randomly generated numbers in the dice array
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void roll_dice(int *dice, int size)
{
	int index = 0;

	for (index = 0; index < size; ++index)
	{
		dice[index] = rand() % 6 + 1;
	}
}

/*************************************************************
* Function: print_dice()
* Date Created: 03/09/16
* Date Last Modified: 03/09/16
* Description: This function prints the numbers in the dice array
* Input parameters: *dice
* Returns: Strings of characters
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void print_dice(int *dice)
{
	printf("dice #1 = %d\n", dice[0]);
	printf("dice #2 = %d\n", dice[1]);
	printf("dice #3 = %d\n", dice[2]);
	printf("dice #4 = %d\n", dice[3]);
	printf("dice #5 = %d\n", dice[4]);
}

/*************************************************************
* Function: reroll_dice()
* Date Created: 03/09/16
* Date Last Modified: 03/09/16
* Description: This function rolls a specific die in the set of dice in the dice array
* Input parameters: *dice, num
* Returns: A randomly generate number in a position in the dice array
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void reroll_dice(int *dice, int num)
{
	dice[num-1] = rand() % 6 + 1;
}

/*************************************************************
* Function: roll_count()
* Date Created: 03/12/16
* Date Last Modified: 03/12/16
* Description: This function counts the number of rolls
* Input parameters: rolls
* Returns: rolls
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int roll_count(rolls)
{
	rolls += 1;
	printf("Roll #%d\n", rolls);
	return rolls;
}

/*************************************************************
* Function: sort()
* Date Created: 03/12/16
* Date Last Modified: 03/12/16
* Description: This function sorts the array of dice from smallest to largest
* Input parameters: number, n
* Returns: An organized array for dice
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void sort(int* number, int n) 
{
	int temp = 0, j = 0, i = 0;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (number[j] >number[j + 1])
			{
				temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}
}

/*************************************************************
* Function: compute_score()
* Date Created: 03/12/16
* Date Last Modified: 03/12/16
* Description: This function computes your score based on your chosen option and makes sure you cant choose that option again
* Input parameters: *dice, *point, option, score
* Returns: score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int compute_score(int *dice, int *point, int option, int score)
{
	if ((option == 7) && ((dice[0] == dice[1] && dice[0] == dice[2]) || (dice[1] == dice[2] && dice[1] == dice[3]) || (dice[2] == dice[3] && dice[2] == dice[4])) && (point[6] == 0))
	{
		score += dice[0] + dice[1] + dice[2] + dice[3] + dice[4];
		point[6] += 1;
	}
	if ((option == 8) && ((dice[0] == dice[1] && dice[0] == dice[2] && dice[0] == dice[3]) || (dice[1] == dice[2] && dice[1] == dice[3] && dice[1] == dice[4])) && (point[7] == 0))
	{
		score += dice[0] + dice[1] + dice[2] + dice[3] + dice[4];
		point[7] += 1;
	}
	if ((option == 9) && (((dice[0] == dice[1]) && (dice[2] == dice[3] && dice[2] == dice[4])) || (dice[0] == dice[1] && dice[0] == dice[2]) && (dice[3] == dice[4])) && (point[8] == 0))
	{
		score += 25;
		point[8] += 1;
	}
	if ((option == 10) && ((dice[0] == dice[1] - 1 && dice[0] == dice[2] - 2 && dice[0] == dice[3] - 3) || dice[1] == dice[2] - 1 && dice[1] == dice[3] - 2 && dice[1] == dice[4] - 3) && (point[9] == 0))
	{
		score += 30;
		point[9] += 1;
	}
	if ((option == 11) && (dice[0] == dice[1] - 1 && dice[0] == dice[2] - 2 && dice[0] == dice[3] - 3 && dice[0] == dice[4] - 4) && (point[10] == 0))
	{
		score += 40;
		point[10] += 1;
	}
	if ((option == 12) && (dice[0] == dice[1] && dice[0] == dice[2] && dice[0] == dice[3] && dice[0] == dice[4]) && (point[11] == 0))
	{
		score += 50;
		point[11] += 1;
	}
	if ((option == 13) && (point[12] == 0))
	{
		score += dice[0] + dice[1] + dice[2] + dice[3] + dice[4];
		point[12] += 1;
	}
	if ((option == 7) && (point[6] == 0))
	{
		score += 0;
		point[6] += 1;
	}
	if ((option == 8) && (point[7] == 0))
	{
		score += 0;
		point[7] += 1;
	}
	if ((option == 9) && (point[8] == 0))
	{
		score += 0;
		point[8] += 1;
	}
	if ((option == 10) && (point[9] == 0))
	{
		score += 0;
		point[9] += 1;
	}
	if ((option == 11) && (point[10] == 0))
	{
		score += 0;
		point[10] += 1;
	}
	if ((option == 12) && (point[11] == 0))
	{
		score += 0;
		point[11] += 1;
	}
	if ((option == 13) && (point[12] == 0))
	{
		score += 0;
		point[12] += 1;
	}
	return score;
}

/*************************************************************
* Function: compute_subtotal()
* Date Created: 03/12/16
* Date Last Modified: 03/12/16
* Description: This function does the scoring if you choose one of the subtotal options and makes sure you cant repeat choosing them
* Input parameters: *dice, *point, option, score
* Returns: score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int compute_subtotal(int *dice, int *point, int option, int score)
{
	if ((option == 1) && (point[0] == 0))
	{
		if (dice[0] == 1)
		{
			score += 1;
		}
		if (dice[1] == 1)
		{
			score += 1;
		}
		if (dice[2] == 1)
		{
			score += 1;
		}
		if (dice[3] == 1)
		{
			score += 1;
		}
		if (dice[4] == 1)
		{
			score += 1;
		}
	}
	else if ((option == 3) && (point[2] == 0))
	{
		if (dice[0] == 3)
		{
			score += 3;
		}
		if (dice[1] == 3)
		{
			score += 3;
		}
		if (dice[2] == 3)
		{
			score += 3;
		}
		if (dice[3] == 3)
		{
			score += 3;
		}
		if (dice[4] == 3)
		{
			score += 3;
		}
	}
	else if ((option == 2) && (point[1] == 0))
	{
		if (dice[0] == 2)
		{
			score += 2;
		}
		if (dice[1] == 2)
		{
			score += 2;
		}
		if (dice[2] == 2)
		{
			score += 2;
		}
		if (dice[3] == 2)
		{
			score += 2;
		}
		if (dice[4] == 2)
		{
			score += 2;
		}
	}
	else if ((option == 4) && (point[3] == 0))
	{
		if (dice[0] == 4)
		{
			score += 4;
		}
		if (dice[1] == 4)
		{
			score += 4;
		}
		if (dice[2] == 4)
		{
			score += 4;
		}
		if (dice[3] == 4)
		{
			score += 4;
		}
		if (dice[4] == 4)
		{
			score += 4;
		}
	}
	else if ((option == 5) && (point[4] == 0))
	{
		if (dice[0] == 5)
		{
			score += 5;
		}
		if (dice[1] == 5)
		{
			score += 5;
		}
		if (dice[2] == 5)
		{
			score += 5;
		}
		if (dice[3] == 5)
		{
			score += 5;
		}
		if (dice[4] == 5)
		{
			score += 5;
		}
	}
	else if ((option == 6) && (point[5] == 0))
	{
		if (dice[0] == 6)
		{
			score += 6;
		}
		if (dice[1] == 6)
		{
			score += 6;
		}
		if (dice[2] == 6)
		{
			score += 6;
		}
		if (dice[3] == 6)
		{
			score += 6;
		}
		if (dice[4] == 6)
		{
			score += 6;
		}
	}
	return score;
}

/*************************************************************
* Function: computer_score()
* Date Created: 03/12/16
* Date Last Modified: 03/12/16
* Description: This function lets the user compare his/her score against an oppenent
* Input parameters: score
* Returns: score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int computer_score(int score)
{
	int number = 0;
	number = rand() % 20 + 1;
	score += number;
	return score;
}

/*************************************************************
* Function: no_repeat()
* Date Created: 03/12/16
* Date Last Modified: 03/12/16
* Description: This function penalizes the user for trying to use a scoring option twice
* Input parameters: *point, score
* Returns: score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int no_repeat(int *point, int score)
{
	if (point[0] > 1 || point[1] > 1 || point[2] > 1 || point[3] > 1 || point[4] > 1 || point[5] > 1 || point[6] > 1 || point[7] > 1 || point[8] > 1 || point[9] > 1 || point[10] > 1 || point[11] > 1 || point[12] > 1)
	{
		score -= 100;
		printf("-100 point penalty for choosing the same option more than once");
	}
	return score;
}

