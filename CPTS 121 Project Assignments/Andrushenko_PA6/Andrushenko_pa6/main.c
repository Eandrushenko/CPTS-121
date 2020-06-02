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

int main(void)
{
	//Random
	srand((unsigned int)time(NULL));

	FILE *infile = NULL;

	//Boards
	char player_board[10][10] = { '\0' },
		computer_board[10][10] = { '\0' };

	//Direction set
	Direction direction = HORIZONTAL;

	int row_start = 0,
		col_start = 0,
		overlap = 0,
		option = 0,
		ship_option = 0,
		winner = 0,
		loser = 0,
		moves = 0;
	Stats p1_stats = { 0, 0, 0, 0.0 };
	
	//pointers
	int *stats_hits = &p1_stats.total_hits,
		*stats_misses = &p1_stats.total_misses;

	//Manual Ship placement variables
	char coordinate1 = '\0';
	int coordinate2 = 0;
	int coordinate3 = 0;


	infile = fopen("stats.txt", "w");

	option = battleship_title(option);
	
	if (option == 1)
	{
		system("cls");
		printf("1. Manually place your ships.\n");
		printf("2. Randomly place your ships.\n");
		printf("Select an option: ");
		scanf("%d", &ship_option);
	}
	
	init_board(player_board, 10, 10);

	if (ship_option == 1)
	{
		//Cruiser
		system("cls");
		print_board(player_board, 10, 10);
		printf("Enter the direction of your Cruiser (1 = horizontal, 2 = vertical): ");
		scanf("%d", &direction);
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
		overlap = place_ship(player_board, coordinate3, coordinate2, direction, 'C', 5);

		//Destroyer
		system("cls");
		print_board(player_board, 10, 10);
		printf("Enter the direction of your Destroyer (1 = horizontal, 2 = vertical): ");
		scanf("%d", &direction);
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
		overlap = place_ship(player_board, coordinate3, coordinate2, direction, 'B', 4);
		print_board(player_board, 10, 10);

		//Submarine
		system("cls");
		print_board(player_board, 10, 10);
		printf("Enter the direction of your Submarine (1 = horizontal, 2 = vertical): ");
		scanf("%d", &direction);
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
		overlap = place_ship(player_board, coordinate3, coordinate2, direction, 'S', 3);

		//Destroyer
		system("cls");
		print_board(player_board, 10, 10);
		printf("Enter the direction of your Destroyer (1 = horizontal, 2 = vertical): ");
		scanf("%d", &direction);
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
		overlap = place_ship(player_board, coordinate3, coordinate2, direction, 'D', 3);

		//Patrol Boat
		system("cls");
		print_board(player_board, 10, 10);
		printf("Enter the direction of your Patrol Boat (1 = horizontal, 2 = vertical): ");
		scanf("%d", &direction);
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
		overlap = place_ship(player_board, coordinate3, coordinate2, direction, 'P', 2);

		//Finalized placement
		system("cls");
		print_board(player_board, 10, 10);
		printf("Checking for invalid over lapping/stacking...");
		system("pause");
		if (overlap == 1)
		{
			printf("you tried to overlap so as a penalty you lost the boats you tried to overlap.\n");
		}
		system("pause");
		system("cls");

	}
	else if (ship_option == 2)
	{
		system("cls");

		//Cruiser placement
		direction = generate_direction();
		generate_start_pt(&row_start, &col_start, direction, 5);
		overlap = place_ship(player_board, row_start, col_start, direction, 'C', 5);

		//Battleship placement
		overlap = 1;
		while (overlap == 1)
		{
			direction = generate_direction();
			generate_start_pt(&row_start, &col_start, direction, 4);
			overlap = place_ship(player_board, row_start, col_start, direction, 'B', 4);
		}

		//Submarine placement
		overlap = 1;
		while (overlap == 1)
		{
			direction = generate_direction();
			generate_start_pt(&row_start, &col_start, direction, 3);
			overlap = place_ship(player_board, row_start, col_start, direction, 'S', 3);
		}

		//Destroyer Placement
		overlap = 1;
		while (overlap == 1)
		{
			direction = generate_direction();
			generate_start_pt(&row_start, &col_start, direction, 3);
			overlap = place_ship(player_board, row_start, col_start, direction, 'D', 3);
		}

		//Patrol Boat Placement
		overlap = 1;
		while (overlap == 1)
		{
			direction = generate_direction();
			generate_start_pt(&row_start, &col_start, direction, 2);
			overlap = place_ship(player_board, row_start, col_start, direction, 'P', 2);
		}
		print_board(player_board, 10, 10);
		printf("This is your randomly generated board\n");
		system("pause");
		system("cls");
	}


	//Computer board creation
	init_board(computer_board, 10, 10);

	//Cruiser placement
	direction = generate_direction();
	generate_start_pt(&row_start, &col_start, direction, 5);
	overlap = place_ship(computer_board, row_start, col_start, direction, 'C', 5);

	//Battleship placement
	overlap = 1;
	while (overlap == 1)
	{
		direction = generate_direction();
		generate_start_pt(&row_start, &col_start, direction, 4);
		overlap = place_ship(computer_board, row_start, col_start, direction, 'B', 4);
	}

	//Submarine placement
	overlap = 1;
	while (overlap == 1)
	{
		direction = generate_direction();
		generate_start_pt(&row_start, &col_start, direction, 3);
		overlap = place_ship(computer_board, row_start, col_start, direction, 'S', 3);
	}

	//Destroyer Placement
	overlap = 1;
	while (overlap == 1)
	{
		direction = generate_direction();
		generate_start_pt(&row_start, &col_start, direction, 3);
		overlap = place_ship(computer_board, row_start, col_start, direction, 'D', 3);
	}

	//Patrol Boat Placement
	overlap = 1;
	while (overlap == 1)
	{
		direction = generate_direction();
		generate_start_pt(&row_start, &col_start, direction, 2);
		overlap = place_ship(computer_board, row_start, col_start, direction, 'P', 2);
	}
	print_board(computer_board, 10, 10);
	printf("This is the computer's board.\n");
	system("pause");
	system("cls");

	

	do
	{
		moves++;
		print_board(computer_board, 10, 10);
		fire_shot(computer_board, stats_hits, stats_misses);
		system("cls");
		print_board(computer_board, 10, 10);
		system("pause");
		system("cls");
		print_board(player_board, 10, 10);
		printf("The computer is choosing coordinates...");
		system("pause");
		system("cls");
		cpu_shot(player_board);
		print_board(player_board, 10, 10);
		system("pause");
		system("cls");

		*stats_hits = p1_stats.total_hits,
		*stats_misses = p1_stats.total_misses;
		p1_stats.total_shots = p1_stats.total_hits + p1_stats.total_misses;
		p1_stats.hit_miss_ratio = (double)p1_stats.total_hits / p1_stats.total_misses;
		print_stats(p1_stats, infile);

		//player
		winner += sunk_ship(computer_board, row_start, col_start, direction, 'C', 5);
		winner += sunk_ship(computer_board, row_start, col_start, direction, 'B', 4);
		winner += sunk_ship(computer_board, row_start, col_start, direction, 'S', 3);
		winner += sunk_ship(computer_board, row_start, col_start, direction, 'D', 3);
		winner += sunk_ship(computer_board, row_start, col_start, direction, 'P', 2);

		//Computer
		loser += sunk_ship(player_board, row_start, col_start, direction, 'C', 5);
		loser += sunk_ship(player_board, row_start, col_start, direction, 'B', 4);
		loser += sunk_ship(player_board, row_start, col_start, direction, 'S', 3);
		loser += sunk_ship(player_board, row_start, col_start, direction, 'D', 3);
		loser += sunk_ship(player_board, row_start, col_start, direction, 'P', 2);


	} while ((winner != 5 || loser != 5) && (moves <= 25));

	system("cls");

	if (winner > loser)
	{
		printf("Congratulations! You won!");
	}
	else
	{
		printf("Unfortunatley you lost.");
		printf("Either you took too long or\nall your ships have been sunk.");
	}
	

	fclose(infile);

	return 0;
}