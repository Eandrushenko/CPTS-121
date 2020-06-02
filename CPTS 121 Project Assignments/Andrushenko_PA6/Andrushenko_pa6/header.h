/*******************************************************************************************

* Programmer: Elijah Andrushenko

* Class: CptS 121, Spring  2016; Lab Section 08

* Programming Assignment: PA6

* Date: April 4th, 2016

* Description: This program simulates playing the game, battleship.

* History: 04/01/16 Created the board and ships
04/03/16 Created structs and attempted to avoid collisions
04/04/16 Created the rest of the battleship functions

*******************************************************************************************/


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Type definition for direction
typedef enum direction
{
	HORIZONTAL = 1, VERTICAL
}Direction;

//Type definition for stats
typedef struct stats
{
	int total_hits;
	int total_misses;
	int total_shots;
	double hit_miss_ratio;
}Stats;

//Menu functions
int battleship_title(int option);

int display_rules(void);

//Board set-up functions
void init_board(char board[][10], int row_size, int col_size);

void print_board(char board[][10], int row_size, int col_size);

Direction generate_direction(void);

void generate_start_pt(int *row_start, int *col_start, Direction dir, int length);

int place_ship(char board[][10], int row_start, int col_start, Direction dir, char ship_symbol, int length);

//Stats functions
void print_stats(Stats p_stats, FILE *infile);

//Shot functions
void fire_shot(char board[][10], int *stats_hits, int *stats_misses);

void cpu_shot(char board[][10]);

int sunk_ship(char board[][10], int row_start, int col_start, Direction dir, char ship_symbol, int length);

