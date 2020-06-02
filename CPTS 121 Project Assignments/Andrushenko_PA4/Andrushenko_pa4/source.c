/*******************************************************************************************

* Programmer: Elijah Andrushenko

* Class: CptS 121, Spring  2016; Lab Section 08

* Programming Assignment: PA4

* Date: February 26th, 2016

* Description: This program simulates playing the casino game of craps.

* History: 2/22/16 Created the random dice rolling function and header functions
2/24/16 Got to the point functions that determine if you won or lost
2/26/16 Finished the rest of the program and added bonus features

*******************************************************************************************/

#include "header.h"

/*************************************************************
* Function: print_header()
* Date Created: 2/22/16
* Date Last Modified: 2/22/16
* Description: This function serves as the title of the program
* Input parameters: N/A
* Returns: A string of characters
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void print_header(void)
{
	printf("---------------------------------------------------------------------- .: CRAPS :. --------------------------------------------------------------------------");
}

/*************************************************************
* Function: print_game_rules()
* Date Created: 2/22/16
* Date Last Modified: 2/26/16
* Description: This function lets the user start the game or see the rules and a joke before playing
* Input parameters: jokes
* Returns: strings or the get_jokes function
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void print_game_rules(int jokes)
{
	int value = 0;
	printf("Enter 0 to play, 1 to see the rules, and 2 to get a computer science joke: ");
	scanf("%d", &value);
	if (value == 1)
	{
		printf("1. A player rolls two dice. Each die has six faces. These faces contain 1, 2, 3, 4, 5, and 6 spots.\n");
		printf("2. After the dice have come to rest, the sum of the spots on the two upward faces is calculated.\n");
		printf("3. If the sum is 7 or 11 on the first throw, the player wins. If the sum is 2, 3, or 12 on the first throw (called craps), the player loses.\n");
		printf("4. If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then the sum becomes the player's point. To win, you must continue rolling the dice until you make your point. The player loses by rolling a 7 before making the point.\n");
		printf("5. If you wager a negative amount or if you break the bank you will be kicked.\n");
		printf("6. If you wager $0 then you will have quit properly.\n\n");
	}
	if (value == 2)
	{
		get_jokes(jokes);
	}
}

/*************************************************************
* Function: get_bank_balance()
* Date Created: 2/22/16
* Date Last Modified: 2/22/16
* Description: This function prompts the user for their bank balance
* Input parameters: N/A
* Returns: balance
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
double get_bank_balance(void)
{
	double balance = 0;
	printf("Enter your bank balance: ");
	scanf("%lf", &balance);
	return balance;
}

/*************************************************************
* Function: get_wager_amount()
* Date Created: 2/22/16
* Date Last Modified: 2/22/16
* Description: This function prompts the user for how much to wager
* Input parameters: N/A
* Returns: wager
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
double get_wager_amount(void)
{
	double wager = 0;
	printf("Enter the amount you wish to wager for this roll: ");
	scanf("%lf", &wager);
	return wager;
}

/*************************************************************
* Function: roll_die()
* Date Created: 2/22/16
* Date Last Modified: 2/22/16
* Description: This function generates a random number 1-6
* Input parameters: N/A
* Returns: die
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int roll_die(void)
{
	unsigned int die = 0;
	die = (rand() % 6) + 1;
	return die;
}

/*************************************************************
* Function: calculate_sum_dice()
* Date Created: 2/22/16
* Date Last Modified: 2/22/16
* Description: This function adds the values of two dice together
* Input parameters: die1_value, die2_value
* Returns: total
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int calculate_sum_dice(int die1_value, int die2_value)
{
	int total = 0;
	total = die1_value + die2_value;
	return total;
}

/*************************************************************
* Function: is_win_loss_or_point()
* Date Created: 2/24/16
* Date Last Modified: 2/24/16
* Description: This function determines if the sum of the dice if a win loss or tie.
* Input parameters: sum_dice
* Returns: point
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_win_loss_or_point(int sum_dice)
{
	int point = 0;
	if ((sum_dice == 7) || (sum_dice == 11))
	{
		point = 1;
	}
	else if ((sum_dice == 2) || (sum_dice == 3) || (sum_dice == 12))
	{
		point = 0;
	}
	else
	{
		point = -1;
	}
	return point;
}

/*************************************************************
* Function: is_point_loss_or_neither()
* Date Created: 2/24/16
* Date Last Modified: 2/26/16
* Description: This function determines what happens after a roll value is determined
* Input parameters: sum_dice, point_value
* Returns: point
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_point_loss_or_neither(int sum_dice, int point_value)
{
	int die1 = 0, die2 = 0, new_roll = 0, point = 0;
	if (point_value == -1)
	{
		while ((new_roll != 7) && (new_roll != sum_dice))
		{
			die1 = roll_die();
			die2 = roll_die();
			new_roll = die1 + die2;
			if ((new_roll != 7) && (new_roll != sum_dice))
			{
				printf("You rolled %d we will roll again.\n", new_roll);
			}
		}
		if (new_roll == 7)
		{
			point = 0;
			printf("You rolled %d you lose.\n", new_roll);
		}
		else if (new_roll == sum_dice)
		{
			point = 1;
			printf("You rolled %d you win!\n", new_roll);
		}
	}
	else if (point_value == 0)
	{
		point = 0;
	}
	else if (point_value == 1)
	{
		point = 1;
	}
	return point;
}

/*************************************************************
* Function: adjust_bank_balance()
* Date Created: 2/26/16
* Date Last Modified: 2/26/16
* Description: This function adjusts the bank balance based on the point
* Input parameters: bank_balance, wager_amount, add_or_subtract
* Returns: bank_balance
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract)
{
	if (add_or_subtract == 1)
	{
		bank_balance += wager_amount;
		printf("You wagered $%.2lf and you won so your new bank balance is: $%.2lf\n", wager_amount, bank_balance);
	}
	else if (add_or_subtract == 0)
	{
		bank_balance -= wager_amount;
		printf("You wagered $%.2lf and you lost so your new bank balance is: $%.2lf\n", wager_amount, bank_balance);
	}
	else
	{
		printf("ERROR");
	}
	return bank_balance;
}

/*************************************************************
* Function: chatter_messages()
* Date Created: 2/26/16
* Date Last Modified: 2/26/16
* Description: This function tells the user a message after a round has been played based on the players performance
* Input parameters: number_rolls, win_loss_neither, initial_bank_balance, current_bank_balance
* Returns: Strings
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void chatter_messages(int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance)
{
	if (number_rolls == 20)
	{
		printf("You have played %d games! Do you have a gambling problem?\n", number_rolls);
	}
	else if ((number_rolls == 5) || (number_rolls == 10) || (number_rolls == 15))
	{
		printf("You have played %d games so far.\n", number_rolls);
	}
	else if (current_bank_balance <= initial_bank_balance / 10)
	{
		printf("Wow, you lost a lot of money playing craps you should quit.\n");
	}
	else if (win_loss_neither == 0)
	{
		printf("You lost, better luck next time!\n");
	}
	else if (current_bank_balance >= initial_bank_balance * 2)
	{
		printf("Nice, you are doing really well.\n");
	}
	else if (win_loss_neither == 1)
	{
		printf("Good win!\n");
	}
}

/*************************************************************
* Function: divider_line()
* Date Created: 2/26/16
* Date Last Modified: 2/26/16
* Description: This function is a line used for neatness and organization purposes
* Input parameters: N/A
* Returns: N?A
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void divider_line(void)
{
	printf("-------------------------------------------------------------------------------------------------------------------------------------------------------------");
}

/*************************************************************
* Function: get_jokes()
* Date Created: 2/26/16
* Date Last Modified: 2/26/16
* Description: This function produces jokes before playing the game
* Input parameters: funny
* Returns: String
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int get_jokes(int funny)
{
	if (funny == 1)
	{
		printf("Why do computer scientists always confuse Halloween and Christmas?\n");
		printf("Because 31 Oct. = 25 Dec.\n\n");
	}
	else if (funny == 2)
	{
		printf("There are 10 types of people in the world - those who understand binary, and those who don't.\n\n");
	}
	else if (funny == 3)
	{
		printf("How many computer programmers does it take to change a light bulb?\n");
		printf("None, that's a hardware problem\n\n");
	}
	else if (funny == 4)
	{
		printf("Why do Java programmers have to wear glasses?\n");
		printf("Because they don't C#\n\n");
	}
	else if (funny == 5)
	{
		printf("Why did the programmer quit his job?\n");
		printf("Because he didn't get Arrays\n\n");
	}
	else if (funny == 6)
	{
		printf("A good Ruby programmer?\n");
		printf("Oh yes, hes a gem!\n\n");
	}
}
