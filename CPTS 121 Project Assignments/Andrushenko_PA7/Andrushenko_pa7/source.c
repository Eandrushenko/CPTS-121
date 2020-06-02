/*******************************************************************************************

* Programmer: Elijah Andrushenko

* Class: CptS 121, Spring  2016; Lab Section 08

* Programming Assignment: PA7

* Date: April 4th, 2016

* Description: This program helps you fine tune your addition, subtraction, multiplication, and division skills.

* History: 04/15/16 Created level 1, 2, and 3 functions
04/18/16 Created level 4 and 5 functions and started the menu functions
04/20/16 Finished the menu functions and completed the program

*******************************************************************************************/

#include "header.h"

/*************************************************************
* Function: level1()
* Date Created: 04/15/16
* Date Last Modified: 04/15/16
* Description: This function does the level 1 operations
* Input parameters: *score
* Returns: &score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void level1(int *score)
{
	int num1 = 0, num2 = 0, num3 = 0, answer = 0, guess = 0, set_up = 0;

	set_up = rand() % 2;

	num1 = rand() % 10;
	num2 = rand() % 10;
	num3 = rand() % 10;
	
	if (set_up == 0)
	{
		answer = num1 + num2 - num3;

		printf("%d + %d - %d = ", num1, num2, num3);
		scanf("%d", &guess);
		if (guess == answer)
		{
			printf("Correct!\n\n");
			*score += 1;
		}
		else
		{
			*score -= 2;
			printf("Incorrect.  ");
			printf("%d + %d - %d = %d\n\n", num1, num2, num3, answer);
		}
	}
	else if (set_up == 1)
	{
		answer = num1 - num2 + num3;

		printf("%d - %d + %d = ", num1, num2, num3);
		scanf("%d", &guess);

		if (guess == answer)
		{
			printf("Correct!\n\n");
			*score += 1;
		}
		else
		{
			*score -= 2;
			printf("Incorrect.  ");
			printf("%d - %d + %d = %d\n\n", num1, num2, num3, answer);
		}
	}

}

/*************************************************************
* Function: level2()
* Date Created: 04/15/16
* Date Last Modified: 04/15/16
* Description: This function does the level 2 operations
* Input parameters: *score
* Returns: &score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void level2(int *score)
{
	int num1 = 0, num2 = 0, answer = 0, guess = 0;

	num1 = rand() % 10;
	num2 = rand() % 10;
	answer = num1 * num2;

	printf("%d * %d = ", num1, num2);
	scanf("%d", &guess);

	if (guess == answer)
	{
		printf("Correct!\n\n");
		*score += 2;
	}
	else
	{
		*score -= 2;
		printf("Incorrect.  ");
		printf("%d * %d = %d\n\n", num1, num2, answer);
	}
}

/*************************************************************
* Function: level3()
* Date Created: 04/15/16
* Date Last Modified: 04/15/16
* Description: This function does the level 3 operations
* Input parameters: *score
* Returns: &score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void level3(int *score)
{
	int num1 = 0, num2 = 0, answer = 0, remainder = 0, guess = 0, remainder_guess = 0;

	num1 = rand() % 10;
	num2 = rand() % 10;
	answer = floor(num1 / num2);
	remainder = num1 % num2;

	printf("%d / %d = ", num1, num2);
	scanf("%d", &guess);
	printf("Remainder = ");
	scanf("%d", &remainder_guess);

	if (guess == answer && remainder_guess == remainder)
	{
		printf("Correct!\n\n");
		*score += 3;
	}
	else
	{
		*score -= 2;
		printf("Incorrect.  ");
		printf("%d / %d = %d R %d\n\n", num1, num2, answer, remainder);
	}

}

/*************************************************************
* Function: level4()
* Date Created: 04/18/16
* Date Last Modified: 04/18/16
* Description: This function does the level 4 operations
* Input parameters: *score
* Returns: &score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void level4(int *score)
{
	int num1 = 0, num2 = 0, num3 = 0, guess = 0, remainder = 0, remainder_guess = 0, answer = 0, set_up = 0, math = 0;

	num1 = rand() % 10;
	num2 = rand() % 10;
	num3 = rand() % 10;

	set_up = rand() % 2;

	if (set_up == 0)
	{
		answer = num1 + num2 * num3;

		printf("%d + %d * %d = ", num1, num2, num3);
		scanf("%d", &guess);

		if (guess == answer)
		{
			printf("Correct!\n\n");
			*score += 5;
		}
		else
		{
			*score -= 3;
			printf("Incorrect.  ");
			printf("%d + %d * %d = %d\n\n", num1, num2, num3, answer);
		}
	}
	else if (set_up == 1)
	{
		math = (num3 * num1) + num2;
		answer = floor(math / num3);
		remainder = math % num3;

		printf("%d + %d / %d = ", num1, num2, num3);
		scanf("%d", &guess);
		printf("Remainder = ");
		scanf("%d", &remainder_guess);

		if (guess == answer && remainder_guess == remainder)
		{
			printf("Correct!\n\n");
			*score += 5;
		}
		else
		{
			*score -= 3;
			printf("Incorrect.  ");
			printf("%d + %d / %d = %d R %d\n\n", num1, num2, num3, answer, remainder);
		}
	}
}

/*************************************************************
* Function: level5()
* Date Created: 04/18/16
* Date Last Modified: 04/18/16
* Description: This function does the level 5 operations
* Input parameters: *score
* Returns: &score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void level5(int *score)
{
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, answer = 0, guess = 0, remainder = 0, remainder_guess = 0, math = 0, math2 = 0;

	num1 = rand() % 100;
	num2 = (rand() % 1000) * (-1);
	num3 = rand() % 1000;
	num4 = rand() % 100;

	math = num2 * num3;
	math2 = (num1 * num4) + math;
	answer = floor(math2 / num4);
	remainder = math2 % num4;

	printf("%d + %d * %d / %d = ", num1, num2, num3, num4);
	scanf("%d", &guess);
	printf("Remainder = ");
	scanf("%d", &remainder_guess);

	if (guess == answer && remainder_guess == remainder)
	{
		printf("Correct!\n\n");
		*score += 10;
	}
	else
	{
		*score -=5;
		printf("Incorrect.  ");
		printf("%d + %d * %d / %d = %d R %d\n\n", num1, num2, num3, num4, answer, remainder);
	}
}


/*************************************************************
* Function: main_menu()
* Date Created: 04/18/16
* Date Last Modified: 04/20/16
* Description: This function serves as the main menu of the program
* Input parameters: N/A
* Returns: score
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int main_menu()
{
	int option = 0, score = 0;

	printf(" .:+ Main Menu +:.\n");
	printf("1. Learn how to use the program.\n");
	printf("2. Enter your name.\n");
	printf("3. Difficulty Selection.\n");
	printf("4. Start a new Sequence of problems.\n");
	printf("5. Quit.\n");
	printf("Select an option: ");
	scanf("%d", &option);

	if (option == 1)
	{
		system("cls");
		intro_program();
	}
	else if (option == 2)
	{
		char name[50] = "\0";
		system("cls");
		printf("Enter your name here: ");
		scanf("%s", &name);
		printf("Thanks %s! Good luck doing math problems!\n", name);
		system("pause");
		system("cls");
		main_menu();
	}
	else if (option == 3)
	{
		system("cls");
		difficulty_menu();
		printf("Select an option: ");
		scanf("%d", &score);
		if (score == 1)
		{ 
			system("cls");
			printf("You chose the easy difficulty.\n");
			score = 0;
			system("pause");
			system("cls");
			main_menu();
		}
		else if (score == 2)
		{
			system("cls");
			printf("You chose the fair difficulty.\n");
			score = 10;
			system("pause");
			system("cls");
			main_menu();
		}
		else if (score == 3)
		{
			system("cls");
			printf("You chose the intermediate difficulty.\n");
			score = 30;
			system("pause");
			system("cls");
			main_menu();
		}
		else if (score == 4)
		{
			system("cls");
			printf("You chose the hard difficulty.\n");
			score = 60;
			system("pause");
			system("cls");
			main_menu();
		}
		else if (score == 5)
		{
			system("cls");
			printf("You chose the impossible difficulty.\n");
			score = 110;
			system("pause");
			system("cls");
			main_menu();
		}
		else
		{
			system("cls");
			printf("Please choose a valid option (1-5).\n");
			system("pause");
			system("cls");
			main_menu();
		}
	}
	else if (option == 4)
	{
		system("cls");
	}
	else if (option == 5)
	{
		system("cls");
		score = 1000;
	}
	else
	{
		system("cls");
		main_menu();
	}
	return score;
}

/*************************************************************
* Function: intro_program()
* Date Created: 04/20/16
* Date Last Modified: 04/20/16
* Description: This function displays to the user how to use the program
* Input parameters: N/A
* Returns: N/A
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void intro_program(void)
{
	printf("Using this program is simple.\n");
	printf("You enter an option at the menu.\n");
	printf("Then you have the option to save your progress, select difficulty,\nenter your initials or solve various math problems.\n");
	printf("The goal of this program is to help you improve your math skills.\n");
	printf("Good luck, have fun, and get better!\n\n");
	system("pause");
	system("cls");
	main_menu();
}


/*************************************************************
* Function: difficulty_menu()
* Date Created: 04/20/16
* Date Last Modified: 04/20/16
* Description: This function displays to the user options to choose the starting difficulty
* Input parameters: N/A
* Returns: N/A
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void difficulty_menu(void)
{
	printf("Please enter the level of difficulty.\n");
	printf("1. Easy: Addition and subtration problems.\n");
	printf("2. Fair: Multiplication problems.\n");
	printf("3. Intermediate: Division problems.\n");
	printf("4. Hard: A mix of addition, subtraction, multiplication and division problems.\n");
	printf("5. Impossible: A mix of addition, subtraction, multiplication, and division,\nwith positive and negative numbers and bigger numbers than the previous modes.\n");
}
