#include "header.h"

int is_palindrome(char *s, int i, int j)
{
	if (s[i] != s[j])
	{
		return 0;
	}
	else if (i >= j)
	{
		return 1;
	}

	return is_palindrome(s, i + 1, j - 1);
}

int doMaze(char maze[][8], int col, int row)
{
	int value = 0;
	maze[row][col] = '~';
	if (col == 7 && row == 7)
	{
		return 1;
	}
	if (value != 1 && row > 0 && maze[row - 1][col] == '-') //North
	{
		value = doMaze(maze, col, row - 1);
	}
	if (value != 1 && row < 7 && maze[row + 1][col] == '-')//South
	{
		value = doMaze(maze, col, row + 1);
	}
	if (value != 1 && col < 7 && maze[row][col + 1] == '-')//East
	{
		value = doMaze(maze, col + 1, row);
	}
	if (value != 1 && col > 0 && maze[row][col - 1] == '-')//West
	{
		value = doMaze(maze, col - 1, row);
	}
	return value;
}

void print_maze(char maze[][8], int row_size, int col_size)
{
	int row_index = 0, col_index = 0;

	for (row_index = 0; row_index < row_size; row_index++)
	{
		for (col_index = 0; col_index < col_size; col_index++)
		{
			printf(" %c ", maze[row_index][col_index]);
		}
		putchar('\n');
	}
}