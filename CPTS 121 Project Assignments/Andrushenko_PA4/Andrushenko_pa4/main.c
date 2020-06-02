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

int main(void)
{
	//random timer for dice rolls
	srand(time(NULL));

	//variables
	double bank_balance = 0,
		starting_balance = 0,
		wager_amount = 0;

	int die1 = 0,
		die2 = 0,
		die_sum = 0,
		point = 0,
		point2 = 0,
		roll_count = 0,
		random = 0;

	random = roll_die();

	//title functions
	print_header();
	print_game_rules(random);

	//prompt for bank balance
	bank_balance = get_bank_balance();
	starting_balance = bank_balance;


	do
	{
		wager_amount = get_wager_amount();

		die1 = roll_die();
		die2 = roll_die();

		die_sum = calculate_sum_dice(die1, die2);

		if ((die_sum != 2) && (die_sum != 3) && (die_sum != 12) && (die_sum != 7))
		{
			printf("You rolled a %d this is now your point.\n", die_sum);
		}
		else if (die_sum == 7)
		{
			printf("You rolled a %d on the first roll, you win!\n", die_sum);
		}
		else
		{
			printf("You rolled a %d on the first roll, you lose.\n", die_sum);
		}

		point = is_win_loss_or_point(die_sum);

		point2 = is_point_loss_or_neither(die_sum, point);

		bank_balance = adjust_bank_balance(bank_balance, wager_amount, point2);

		roll_count += 1;

		chatter_messages(roll_count, point2, starting_balance, bank_balance);

		divider_line();

	} while ((bank_balance > 0) && (wager_amount > 0));

	//after game messages
	if (bank_balance <= 0)
	{
		printf("\nYou have gone broke! You can no longer play craps.\n");
	}
	else if (wager_amount < 0)
	{
		printf("\nYou have been kicked for wagering a negative amount, this is agaisnt the rules.\n");
	}
	else if ((wager_amount == 0) && (bank_balance > starting_balance))
	{
		printf("\nNice work you started out with $%.2lf and you left with $%.2lf.\n",starting_balance, bank_balance);
	}
	else if ((wager_amount == 0) && (bank_balance < starting_balance))
	{
		printf("\nYou started out with $%.2lf and you left with $%.2lf, that's unfortunate.\n", starting_balance, bank_balance);
	}
	else if ((wager_amount == 0) && (bank_balance == starting_balance))
	{
		printf("\nYou started out with $%.2lf and you left with $%.2lf, so you broke even.\n", starting_balance, bank_balance);
	}
	else
	{
		printf("\nERROR\n");
	}



	return 0;
}