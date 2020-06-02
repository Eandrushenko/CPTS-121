/*******************************************************************************************

* Programmer: Elijah Andrushenko

* Class: CptS 121, Spring  2016; Lab Section 08

* Programming Assignment: PA3

* Date: February 11th, 2016

* Description: This program reads the first ten characters from a file called input.dat and displays its ascii table
and statistics on two other files.

* History: 2/10/2016 Successfully made a function that opens a file and got stuck when trying to read the file

2/11/2016 Completed the program and it runs successfully and does all calculations correctly

*******************************************************************************************/

#include "header.h"



/*************************************************************
* Function: open_input_file()                    
* Date Created: 2/10/16                                             
* Date Last Modified: 2/10/16                                     
* Description: This function opens input.dat   
* Input parameters: N/A      
* Returns: The File                
* Preconditions: N/A                                            
* Postconditions: N/A                                           
*************************************************************/
FILE * open_input_file(void)
{
	FILE *infile = NULL;

	infile = fopen("input.dat", "r");

	return infile;
}

/*************************************************************
* Function: read_character()
* Date Created: 2/10/16
* Date Last Modified: 2/11/16
* Description: This function reads from input.dat
* Input parameters: infile
* Returns: character
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
char read_character(FILE *infile)
{
	char character = '\0';

	fscanf(infile, "%c", &character);

	return character;
}

/*************************************************************
* Function: determine_ascii_value()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function outputs the ascii value of characters in another file
* Input parameters: char0, char1, char2, char3, char4, char5, char6, char7, char8, char9
* Returns: N/A
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int determine_ascii_value(char char0, char char1, char char2, char char3, char char4, char char5, char char6, char char7, char char8, char char9)
{
	FILE * infile;
	infile = fopen("output.ascii.dat", "w");
	fprintf(infile, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", char0, char1, char2, char3, char4, char5, char6, char7, char8, char9);
}

/*************************************************************
* Function: is_line()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function determines if a character is a newline character or not
* Input parameters: character
* Returns: result
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_line(char character)
{
	int result;
	if (character == '\n')
	{
		result = NEWLINE;
	}
	else
	{
		result = NOT_NEWLINE;
	}
	return result;
}

/*************************************************************
* Function: number_lines()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function counts how many newline characters there are
* Input parameters: integer, current_number_lines
* Returns: current_number_lines
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int number_lines(int integer, int current_number_lines)
{
	if (integer == NEWLINE)
	{
		current_number_lines += 1;
	}
	return current_number_lines;
}

/*************************************************************
* Function: is_vowel()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function determines if a character is a vowel or not
* Input parameters: character
* Returns: result
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_vowel(char character)
{
	int result;
	if (character == 'A' || character == 'a' || character == 'E' || character == 'e' || character == 'I' || character == 'i' || character == 'O' || character == 'o' || character == 'U' || character == 'u')
	{
		result = VOWEL;
	}
	else
	{
		result = NOT_VOWEL;
	}
	return result;
}

/*************************************************************
* Function: number_vowels()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function counts how many vowels there are
* Input parameters: character, current_number_vowels
* Returns: current_number_vowels
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int number_vowels(int character, int current_number_vowels)
{
	if (character == VOWEL)
	{
		current_number_vowels += 1;
	}
	return current_number_vowels;
}

/*************************************************************
* Function: is_digit()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function determines if a character is a digit or not
* Input parameters: character
* Returns: result
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_digit(char character)
{
	int result;
	if (character >= '0' && character <= '9')
	{
		result = DIGIT;
	}
	else
	{
		result = NOT_DIGIT;
	}
	return result;
}

/*************************************************************
* Function: number_digits()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function counts how many digits there are
* Input parameters: character, current_number_digits
* Returns: current_number_digits
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/

int number_digits(int character, int current_number_digits)
{
	if (character == DIGIT)
	{
		current_number_digits += 1;
	}
	return current_number_digits;
}


/*************************************************************
* Function: is_alpha()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function determines if a character is a letter or not
* Input parameters: character
* Returns: result
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_alpha(char character)
{
	int result;
	if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
	{
		result = ALPHA;
	}
	else
	{
		result = NOT_ALPHA;
	}
	return result;
}


/*************************************************************
* Function: number_alphas()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function counts how many letters there are
* Input parameters: character, current_number_alphas
* Returns: current_number_alphas
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int number_alphas(int character, int current_number_alphas)
{
	if (character == ALPHA)
	{
		current_number_alphas += 1;
	}
	return current_number_alphas;
}


/*************************************************************
* Function: is_lower()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function determines if a character is a lower case letter or not
* Input parameters: character
* Returns: result
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_lower(char character)
{
	int result;
	if (character >= 'a' && character <= 'z')
	{
		result = LOWER;
	}
	else
	{
		result = NOT_LOWER;
	}
	return result;
}


/*************************************************************
* Function: number_lowers()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function counts how many lower case letters there are
* Input parameters: character, current_number_lowers
* Returns: current_number_lowers
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int number_lowers(int character, int current_number_lowers)
{
	if (character == LOWER)
	{
		current_number_lowers += 1;
	}
	return current_number_lowers;
}

/*************************************************************
* Function: is_upper()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function determines if a character is a upper case character or not
* Input parameters: character
* Returns: result
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_upper(char character)
{
	int result;
	if (character >= 'A' && character <= 'Z')
	{
		result = UPPER;
	}
	else
	{
		result = NOT_UPPER;
	}
	return result;
}


/*************************************************************
* Function: number_uppers()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function counts how many upper case characters there are
* Input parameters: character, current_number_uppers
* Returns: current_number_uppers
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int number_uppers(int character, int current_number_uppers)
{
	if (character == UPPER)
	{
		current_number_uppers += 1;
	}
	return current_number_uppers;
}

/*************************************************************
* Function: is_space()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function determines if a character is a whitespace character or not
* Input parameters: character
* Returns: result
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_space(char character)
{
	int result;
	if (character == ' ' || character == '\n' || character == '\r' || character == '\t' || character == '\v' || character == '\f')
	{
		result = WHITESPACE;
	}
	else
	{
		result = NOT_WHITESPACE;
	}
	return result;
}


/*************************************************************
* Function: number_spaces()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function counts how many whitespace characters there are
* Input parameters: character, current_number_spaces
* Returns: current_number_spaces
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int number_spaces(int character, int current_number_spaces)
{
	if (character == WHITESPACE)
	{
		current_number_spaces += 1;
	}
	return current_number_spaces;
}

/*************************************************************
* Function: is_alnum()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function determines if a character is a letter or a number
* Input parameters: character
* Returns: result
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_alnum(char character)
{
	int result;
	if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z') || (character >= '0' && character <= '9'))
	{
		result = ALNUM;
	}
	else
	{
		result = NOT_ALNUM;
	}
	return result;
}


/*************************************************************
* Function: number_alnums()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function counts how many numbers and letters there are combined
* Input parameters: character, current_number_alnums
* Returns: current_number_alnums
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int number_alnums(int character, int current_number_alnums)
{
	if (character == ALNUM)
	{
		current_number_alnums += 1;
	}
	return current_number_alnums;
}


/*************************************************************
* Function: is_punct()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function determines if a character is a punctuation mark or not
* Input parameters: character
* Returns: result
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int is_punct(char character)
{
	int result;
	if (character == '.' || character == '!' || character == '?' || character == ',' || character == ':' || character == ';' || character == '`')
	{
		result = PUNCT;
	}
	else
	{
		result = NOT_PUNCT;
	}
	return result;
}


/*************************************************************
* Function: number_puncts()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function counts how many punctuation marks there are
* Input parameters: character, current_number_puncts
* Returns: current_number_puncts
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int number_puncts(int character, int current_number_puncts)
{
	if (character == PUNCT)
	{
		current_number_puncts += 1;
	}
	return current_number_puncts;
}


/*************************************************************
* Function: print_stats()
* Date Created: 2/11/16
* Date Last Modified: 2/11/16
* Description: This function prints the stats of input.dat to output.stats.dat
* Input parameters: item0, item1, item2, item3, item4, item5, item6, item7, item8
* Returns: N/A
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
void print_stats(int item0, int item1, int item2, int item3, int item4, int item5, int item6, int item7, int item8)
{
	FILE * infile;
	infile = fopen("output.stats.dat", "w");
	fprintf(infile, "Number lines: %d\n", item0);
	fprintf(infile, "Number Vowels: %d\n", item1);
	fprintf(infile, "Number Digits: %d\n", item2);
	fprintf(infile, "Number Alphas: %d\n", item3);
	fprintf(infile, "Number Lowers: %d\n", item4);
	fprintf(infile, "Number Uppers: %d\n", item5);
	fprintf(infile, "Number spaces: %d    -- Including newline('\\n')\n", item6);
	fprintf(infile, "Number Alnums: %d\n", item7);
	fprintf(infile, "Number Puncts: %d\n", item8);
}
