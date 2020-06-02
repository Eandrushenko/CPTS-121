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


#include "header.h"


/*************************************************************
* Function: battleship_title()
* Date Created: 04/04/16
* Date Last Modified: 04/04/16
* Description: This function serves as the title of the program
* Input parameters: option
* Returns: A string of characters
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int battleship_title(int option)
{
	printf("XXXX     XX    XXXXX   XXXXX   X       XXXXX    XXXXX   X  X   X   XXX\n");
	printf("X  XX   X  X     X       X     X       X       XX       X  X   X   X  X\n");
	printf("XXXX    X  X     X       X     X       XXX      XXXX    XXXX   X   XXX\n");
	printf("X  XX   XXXX     X       X     X       X           XX   X  X   X   X\n");
	printf("XXXX    X  X     X       X     XXXXX   XXXXX   XXXXX    X  X   X   X\n");
	printf("1. Play Game.\n");
	printf("2. Rules.\n");
	printf("Select An option: ");
	scanf("%d", &option);

	if (option == 1)
	{
		return option;
	}
	else if (option == 2)
	{
		display_rules();
	}
	else
	{
		system("cls");
		battleship_title(option);
	}
}

/*************************************************************
* Function: display_rules()
* Date Created: 04/04/16
* Date Last Modified: 04/04/16
* Description: This function displays the rules of battleship
* Input parameters: N/A
* Returns: A string of characters
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int display_rules(void)
{
	int option = 0;
	system("cls");
	printf("XXXX    X   X   X       XXXXX    XXXXX\n");
	printf("X  XX   X   X   X       X       XX\n");
	printf("XXXX    X   X   X       XXXXX    XXXX\n");
	printf("X  XX   X   X   X       X           XX\n");
	printf("X   X   XXXXX   XXXXX   XXXXX   XXXXX\n");
	printf("\n");
	printf("1. Both players place ships on their respective boards\n");
	printf("2. Each player has 5 boats to place.\n");
	printf("\t-Cruiser (5 Spaces)\n");
	printf("\t-Battleship (4 Spaces)\n");
	printf("\t-Submarine (3 Spaces)\n");
	printf("\t-Destroyer (3 Spaces)\n");
	printf("\t-Patrol Boat (2 Spaces)\n");
	printf("3. Players take turns guessing coordinates to see if they hit or miss\neach others boats.\n");
	printf("4. X represents a hit and # represents a miss.\n");
	printf("5. The winner is the first player to sink all the oppenents boats. \n\n");
	system("pause");
	system("cls");
	battleship_title(option);

}

/*************************************************************
* Function: init_board()
* Date Created: 04/01/16
* Date Last Modified: 04/01/16
* Description: This creates the board for battleship[
* Input parameters: board, row_size, col_size
* Returns: N/A
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void init_board(char board[][10], int row_size, int col_size)
{
	int row_index = 0, col_index = 0;

	for (row_index = 0; row_index < row_size; row_index++)
	{
		for (col_index = 0; col_index < col_size; col_index++)
		{
			board[row_index][col_index] = '.';
		}
	}
}

/*************************************************************
* Function: battleship_title()
* Date Created: 04/01/16
* Date Last Modified: 04/01/16
* Description: This function prints the board to the interface
* Input parameters: board, row_size, col_size
* Returns: Many strings and characters to create the board
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void print_board(char board[][10], int row_size, int col_size)
{
	int row_index = 0, col_index = 0;

	printf("  A  B  C  D  E  F  G  H  I  J \n");

	for (row_index = 0; row_index < row_size; row_index++)
	{
		printf("%d", row_index);
		for (col_index = 0; col_index < col_size; col_index++)
		{
			printf(" %c ", board[row_index][col_index]);
		}
		putchar('\n');
	}
	printf("\n");
}

/*************************************************************
* Function: generate_direction()
* Date Created: 04/01/16
* Date Last Modified: 04/01/16
* Description: This function generate a random direction
* Input parameters: N/A
* Returns: dir
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
Direction generate_direction(void)
{
	Direction dir = HORIZONTAL;
	dir = (Direction)((rand() % 2) + 1);

	return dir;
}

/*************************************************************
* Function: generate_start_pt()
* Date Created: 04/01/16
* Date Last Modified: 04/01/16
* Description: This function generates the start point for ships to stay in bounds
* Input parameters: *row_start, *col_start, dir, length
* Returns: N/A
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void generate_start_pt(int *row_start, int *col_start, Direction dir, int length)
{
	if (dir == HORIZONTAL)
	{
		*row_start = rand() % 10; 
		*col_start = rand() % (10 - (length - 1));
	}
	else 
	{
		*row_start = rand() % (10 - (length - 1));
		*col_start = rand() % 10; 
	}
}

/*************************************************************
* Function: place_ship()
* Date Created: 04/01/16
* Date Last Modified: 04/04/16
* Description: This function places the ship and makes sure they dont collide
* Input parameters: board, row_start, col_start, dir, ship_symbol, length
* Returns: overlap
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int place_ship(char board[][10], int row_start, int col_start, Direction dir, char ship_symbol, int length)
{
	int index = 0, overlap = 0;

	for (index = 0; index < length; ++index)
	{
		if (dir == HORIZONTAL)
		{
			if (board[row_start][col_start + index] != '.')
			{
				overlap = 1;
			}
		}
		else
		{
			if (board[row_start + index][col_start] != '.')
			{
				overlap = 1;
			}
		}
	}

	if (overlap != 1)
	{
		for (index = 0; index < length; ++index)
		{
			if (dir == HORIZONTAL)
			{
				board[row_start][col_start + index] = ship_symbol;
			}
			else
			{
				board[row_start + index][col_start] = ship_symbol;
			}
		}
	}
	return overlap;
}


/*************************************************************
* Function: print_stats()
* Date Created: 04/02/16
* Date Last Modified: 04/02/16
* Description: This function displays the stats to a file
* Input parameters: p_stats, infile
* Returns: Strings to stats.txt
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void print_stats(Stats p_stats, FILE *infile)
{
	fprintf(infile, "total hits: %d\n",p_stats.total_hits);
	fprintf(infile, "total misses: %d\n", p_stats.total_misses);
	fprintf(infile, "total shots: %d\n", p_stats.total_shots);
	fprintf(infile, "hits/miss ratio: %.2lf\n", p_stats.hit_miss_ratio);
	fprintf(infile, "\n");
}


/*************************************************************
* Function: fire_shot()
* Date Created: 04/04/16
* Date Last Modified: 04/04/16
* Description: This function simulates firing salvo at the oppenent's board
* Input parameters: board, *stats_hits, *stats_misses
* Returns: Stats
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void fire_shot(char board[][10], int *stats_hits, int *stats_misses)
{
	char coordinate1 = '\0';
	int coordinate2 = 0;
	int coordinate3 = 0;

	printf("Enter a coordinate letter: ");
	scanf(" %c", &coordinate1);
	printf("Enter a coordinate number: ");
	scanf("%d", &coordinate3);

	if (coordinate1 == 'a' || coordinate1 == 'A')
	{
		coordinate2 = 0;
	}
	else if (coordinate1 == 'b' || coordinate1 == 'B')
	{
		coordinate2 = 1;
	}
	else if (coordinate1 == 'c' || coordinate1 == 'C')
	{
		coordinate2 = 2;
	}
	else if (coordinate1 == 'd' || coordinate1 == 'D')
	{
		coordinate2 = 3;
	}
	else if (coordinate1 == 'e' || coordinate1 == 'E')
	{
		coordinate2 = 4;
	}
	else if (coordinate1 == 'f' || coordinate1 == 'F')
	{
		coordinate2 = 5;
	}
	else if (coordinate1 == 'g' || coordinate1 == 'G')
	{
		coordinate2 = 6;
	}
	else if (coordinate1 == 'h' || coordinate1 == 'H')
	{
		coordinate2 = 7;
	}
	else if (coordinate1 == 'i' || coordinate1 == 'I')
	{
		coordinate2 = 8;
	}
	else if (coordinate1 == 'j' || coordinate1 == 'J')
	{
		coordinate2 = 9;
	}

	if (board[coordinate3][coordinate2] != '.')
	{
		board[coordinate3][coordinate2] = 'X';
		*stats_hits += 1;
	}
	else if (board[coordinate3][coordinate2] == '.')
	{
		board[coordinate3][coordinate2] = '#';
		*stats_misses += 1;
	}
}


/*************************************************************
* Function: cpu_shot()
* Date Created: 04/04/16
* Date Last Modified: 04/04/16
* Description: This function simulates the oppenent's shot at the player
* Input parameters: board
* Returns: N/A
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void cpu_shot(char board[][10])
{
	int coordinate0 = rand() % 10, coordinate1 = rand() % 10;

	if (board[coordinate0][coordinate1] != '.')
	{
		board[coordinate0][coordinate1] = 'X';
		printf("The computer got a hit!\n");
	}
	else if (board[coordinate0][coordinate1] == '.' || board[coordinate0][coordinate1] == '#')
	{
		board[coordinate0][coordinate1] = '#';
		printf("The computer missed!\n");
	}
}

/*************************************************************
* Function: sunk_ship()
* Date Created: 04/04/16
* Date Last Modified: 04/04/16
* Description: This function determines if a ship has sunk or not
* Input parameters: board, row_start, col_start, dir, ship_symbol, length
* Returns: score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int sunk_ship(char board[][10], int row_start, int col_start, Direction dir, char ship_symbol, int length)
{
	int index = 0, score = 0;

	for (index = 0; index < length; ++index)
	{
		if (dir == HORIZONTAL)
		{
			if (board[row_start][col_start + index] != ship_symbol)
			{
				score = 1;
			}
		}
		else
		{
			if (board[row_start + index][col_start] != ship_symbol)
			{
				score = 1;
			}
		}
	}
	return score;
}



