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

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

//title functions
void print_header(void);
void print_game_rules(void);

//bank balance function
double get_bank_balance(void);

//wager function
double get_wager_amount(void);

//rolls a die for a random number between 1 and 6
int roll_die(void);

//adds the dice together
int calculate_sum_dice(int die1_value, int die2_value);

//win or loss functions
int is_win_loss_or_point(int sum_dice);

int is_point_loss_or_neither(int sum_dice, int point_value);

//manage bank balance
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract);

//messages to the user
void chatter_messages(int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance);

void divider_line(void);


