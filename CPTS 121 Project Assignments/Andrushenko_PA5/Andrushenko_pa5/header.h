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

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

//Defined Constants
#define RULES 1
#define PLAY 2

//Menu functions
void display_menu(void);

int get_option(void);

int is_valid(int option);

int run_menu(void);

int determine_operation(int option);

void display_rules(void);

void point_values(void);

void pause_function(void);

//Dice functions
void roll_dice(int *dice, int size);

void reroll_dice(int *dice, int index);

int roll_count(rolls);

void print_dice(int *dice);

//Scoring functions
void sort(int* number, int n);

int compute_score(int *dice, int *point, int option, int score);

int compute_subtotal(int *dice, int *point, int option, int score);

int no_repeat(int *point, int score);

//other functions
int computer_score(int score);


