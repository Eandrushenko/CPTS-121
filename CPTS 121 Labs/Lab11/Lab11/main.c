#include "header.h"

int main(void)
{
	char s[] = "racecar";

	int val = 0, len = 0;

	len = strlen(s);
	len = len - 1;

	val = is_palindrome(s, 0, len);

	if (val == 1)
	{
		printf("%s is a palindrome.\n\n", s);
	}
	else
	{
		printf("%s is not a palindrome.\n\n", s);
	}

	//Project #2

	int val2 = 0;

	char maze[][8] = { {'X', '-', '-', '-', '-', '-', 'X', '-'},
						{'-', '-', 'X', 'X', 'X', 'X', 'X', '-'},
						{'X', '-', '-', '-', '-', 'X', '-', '-'},
						{'X', '-', 'X', '-', 'X', 'X', 'X', '-'},
						{'X', '-', 'X', 'X', '-', 'X', '-', '-'},
						{'X', '-', '-', '-', '-', 'X', '-', '-'},
						{'X', 'X', 'X', 'X', 'X', 'X', '-', '-'},
						{'X', 'X', 'X', 'X', 'X', 'X', 'X', '-'},
	};

	val2 = doMaze(maze, 0, 1);

	print_maze(maze, 8, 8);

	if (val2 == 0)
	{
		printf("The maze can not be completed.\n");
	}
	else
	{
		printf("The maze can be completed.\n");
	}




	return 0;
}