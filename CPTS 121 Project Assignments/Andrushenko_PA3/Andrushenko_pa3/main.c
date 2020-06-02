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

int main(void)
{
	FILE * file;

	//Each char represents a character in input.dat
	char char0 = '\0',
		char1 = '\0',
		char2 = '\0',
		char3 = '\0',
		char4 = '\0',
		char5 = '\0',
		char6 = '\0',
		char7 = '\0',
		char8 = '\0',
		char9 = '\0';

	//These variables are for remembering if each character is a newline or not
	int int0 = 0,
		int1 = 0,
		int2 = 0,
		int3 = 0,
		int4 = 0,
		int5 = 0,
		int6 = 0,
		int7 = 0,
		int8 = 0,
		int9 = 0;

	//These variables are for remembering if each character is a vowel or not
	int vowel0 = 0,
		vowel1 = 0,
		vowel2 = 0,
		vowel3 = 0,
		vowel4 = 0,
		vowel5 = 0,
		vowel6 = 0,
		vowel7 = 0,
		vowel8 = 0,
		vowel9 = 0;

	//These variables are for remembering if each character is a digit or not
	int digit0 = 0,
		digit1 = 0,
		digit2 = 0,
		digit3 = 0,
		digit4 = 0,
		digit5 = 0,
		digit6 = 0,
		digit7 = 0,
		digit8 = 0,
		digit9 = 0;

	//These variables are for remembering if each character is a letter or not
	int letter0 = 0,
		letter1 = 0,
		letter2 = 0,
		letter3 = 0,
		letter4 = 0,
		letter5 = 0,
		letter6 = 0,
		letter7 = 0,
		letter8 = 0,
		letter9 = 0;

	//These variables are for remembering if each character is lower case or not
	int lower0 = 0,
		lower1 = 0,
		lower2 = 0,
		lower3 = 0,
		lower4 = 0,
		lower5 = 0,
		lower6 = 0,
		lower7 = 0,
		lower8 = 0,
		lower9 = 0;

	//These variables are for remembering if each character is upper case or not
	int upper0 = 0,
		upper1 = 0,
		upper2 = 0,
		upper3 = 0,
		upper4 = 0,
		upper5 = 0,
		upper6 = 0,
		upper7 = 0,
		upper8 = 0,
		upper9 = 0;

	//These variables are for remembering if each character is a whitespace character or not
	int space0 = 0,
		space1 = 0,
		space2 = 0,
		space3 = 0,
		space4 = 0,
		space5 = 0,
		space6 = 0,
		space7 = 0,
		space8 = 0,
		space9 = 0;

	//These variables are for remembering if each character is a letter or number
	int alnum0 = 0,
		alnum1 = 0,
		alnum2 = 0,
		alnum3 = 0,
		alnum4 = 0,
		alnum5 = 0,
		alnum6 = 0,
		alnum7 = 0,
		alnum8 = 0,
		alnum9 = 0;

	//These variables are for remembering if each character is a punctuation mark
	int punct0 = 0,
		punct1 = 0,
		punct2 = 0,
		punct3 = 0,
		punct4 = 0,
		punct5 = 0,
		punct6 = 0,
		punct7 = 0,
		punct8 = 0,
		punct9 = 0;

	//Counter variables are here
	int newline_count = 0,
		vowel_count = 0,
		digit_count = 0,
		alpha_count = 0,
		lower_count = 0,
		upper_count = 0,
		space_count = 0,
		alnum_count = 0,
		punct_count = 0;

	//Function opens input.dat for reading
	file = open_input_file();

	//Function reads all 10 characters
	char0 = read_character(file);
	char1 = read_character(file);
	char2 = read_character(file);
	char3 = read_character(file);
	char4 = read_character(file);
	char5 = read_character(file);
	char6 = read_character(file);
	char7 = read_character(file);
	char8 = read_character(file);
	char9 = read_character(file);

	//Prints the ascii value of input.dat to output.ascii.dat for all 10 characters
	determine_ascii_value(char0, char1, char2, char3, char4, char5, char6, char7, char8, char9);

	//Determines if a character is a newline character or not
	int0 = is_line(char0);
	int1 = is_line(char1);
	int2 = is_line(char2);
	int3 = is_line(char3);
	int4 = is_line(char4);
	int5 = is_line(char5);
	int6 = is_line(char6);
	int7 = is_line(char7);
	int8 = is_line(char8);
	int9 = is_line(char9);

	//Counts how many newline characters there are
	newline_count = number_lines(int0, newline_count);
	newline_count = number_lines(int0, newline_count);
	newline_count = number_lines(int0, newline_count);
	newline_count = number_lines(int0, newline_count);
	newline_count = number_lines(int0, newline_count);
	newline_count = number_lines(int0, newline_count);
	newline_count = number_lines(int0, newline_count);
	newline_count = number_lines(int0, newline_count);
	newline_count = number_lines(int0, newline_count);
	newline_count = number_lines(int0, newline_count);

	//Determines if a character is a vowel or not
	vowel0 = is_vowel(char0);
	vowel1 = is_vowel(char1);
	vowel2 = is_vowel(char2);
	vowel3 = is_vowel(char3);
	vowel4 = is_vowel(char4);
	vowel5 = is_vowel(char5);
	vowel6 = is_vowel(char6);
	vowel7 = is_vowel(char7);
	vowel8 = is_vowel(char8);
	vowel9 = is_vowel(char9);

	//Counts how many vowels there are
	vowel_count = number_vowels(vowel0, vowel_count);
	vowel_count = number_vowels(vowel1, vowel_count);
	vowel_count = number_vowels(vowel2, vowel_count);
	vowel_count = number_vowels(vowel3, vowel_count);
	vowel_count = number_vowels(vowel4, vowel_count);
	vowel_count = number_vowels(vowel5, vowel_count);
	vowel_count = number_vowels(vowel6, vowel_count);
	vowel_count = number_vowels(vowel7, vowel_count);
	vowel_count = number_vowels(vowel8, vowel_count);
	vowel_count = number_vowels(vowel9, vowel_count);

	//Determines if a character is a digit or not
	digit0 = is_digit(char0);
	digit1 = is_digit(char1);
	digit2 = is_digit(char2);
	digit3 = is_digit(char3);
	digit4 = is_digit(char4);
	digit5 = is_digit(char5);
	digit6 = is_digit(char6);
	digit7 = is_digit(char7);
	digit8 = is_digit(char8);
	digit9 = is_digit(char9);

	//Counts how many digits there are
	digit_count = number_digits(digit0, digit_count);
	digit_count = number_digits(digit1, digit_count);
	digit_count = number_digits(digit2, digit_count);
	digit_count = number_digits(digit3, digit_count);
	digit_count = number_digits(digit4, digit_count);
	digit_count = number_digits(digit5, digit_count);
	digit_count = number_digits(digit6, digit_count);
	digit_count = number_digits(digit7, digit_count);
	digit_count = number_digits(digit8, digit_count);
	digit_count = number_digits(digit9, digit_count);

	//Determines if a character is a letter or not
	letter0 = is_alpha(char0);
	letter1 = is_alpha(char1);
	letter2 = is_alpha(char2);
	letter3 = is_alpha(char3);
	letter4 = is_alpha(char4);
	letter5 = is_alpha(char5);
	letter6 = is_alpha(char6);
	letter7 = is_alpha(char7);
	letter8 = is_alpha(char8);
	letter9 = is_alpha(char9);

	//Counts how many letters there are
	alpha_count = number_alphas(letter0, alpha_count);
	alpha_count = number_alphas(letter1, alpha_count);
	alpha_count = number_alphas(letter2, alpha_count);
	alpha_count = number_alphas(letter3, alpha_count);
	alpha_count = number_alphas(letter4, alpha_count);
	alpha_count = number_alphas(letter5, alpha_count);
	alpha_count = number_alphas(letter6, alpha_count);
	alpha_count = number_alphas(letter7, alpha_count);
	alpha_count = number_alphas(letter8, alpha_count);
	alpha_count = number_alphas(letter9, alpha_count);

	//Determines if a character is a lower case letter or not
	lower0 = is_lower(char0);
	lower1 = is_lower(char1);
	lower2 = is_lower(char2);
	lower3 = is_lower(char3);
	lower4 = is_lower(char4);
	lower5 = is_lower(char5);
	lower6 = is_lower(char6);
	lower7 = is_lower(char7);
	lower8 = is_lower(char8);
	lower9 = is_lower(char9);

	//Counts how many lower case letters there are
	lower_count = number_lowers(lower0, lower_count);
	lower_count = number_lowers(lower1, lower_count);
	lower_count = number_lowers(lower2, lower_count);
	lower_count = number_lowers(lower3, lower_count);
	lower_count = number_lowers(lower4, lower_count);
	lower_count = number_lowers(lower5, lower_count);
	lower_count = number_lowers(lower6, lower_count);
	lower_count = number_lowers(lower7, lower_count);
	lower_count = number_lowers(lower8, lower_count);
	lower_count = number_lowers(lower9, lower_count);

	//Determines if a character is upper case or not
	upper0 = is_upper(char0);
	upper1 = is_upper(char1);
	upper2 = is_upper(char2);
	upper3 = is_upper(char3);
	upper4 = is_upper(char4);
	upper5 = is_upper(char5);
	upper6 = is_upper(char6);
	upper7 = is_upper(char7);
	upper8 = is_upper(char8);
	upper9 = is_upper(char9);

	//Counts how many upper case letters there are
	upper_count = number_uppers(upper0, upper_count);
	upper_count = number_uppers(upper1, upper_count);
	upper_count = number_uppers(upper2, upper_count);
	upper_count = number_uppers(upper3, upper_count);
	upper_count = number_uppers(upper4, upper_count);
	upper_count = number_uppers(upper5, upper_count);
	upper_count = number_uppers(upper6, upper_count);
	upper_count = number_uppers(upper7, upper_count);
	upper_count = number_uppers(upper8, upper_count);
	upper_count = number_uppers(upper9, upper_count);

	//Determines if a character is whitespace or not
	space0 = is_space(char0);
	space1 = is_space(char1);
	space2 = is_space(char2);
	space3 = is_space(char3);
	space4 = is_space(char4);
	space5 = is_space(char5);
	space6 = is_space(char6);
	space7 = is_space(char7);
	space8 = is_space(char8);
	space9 = is_space(char9);

	//Counts how many whitespace characters there are
	space_count = number_spaces(space0, space_count);
	space_count = number_spaces(space1, space_count);
	space_count = number_spaces(space2, space_count);
	space_count = number_spaces(space3, space_count);
	space_count = number_spaces(space4, space_count);
	space_count = number_spaces(space5, space_count);
	space_count = number_spaces(space6, space_count);
	space_count = number_spaces(space7, space_count);
	space_count = number_spaces(space8, space_count);
	space_count = number_spaces(space9, space_count);

	//Determines if a character is a number or a letter
	alnum0 = is_alnum(char0);
	alnum1 = is_alnum(char1);
	alnum2 = is_alnum(char2);
	alnum3 = is_alnum(char3);
	alnum4 = is_alnum(char4);
	alnum5 = is_alnum(char5);
	alnum6 = is_alnum(char6);
	alnum7 = is_alnum(char7);
	alnum8 = is_alnum(char8);
	alnum9 = is_alnum(char9);

	//Counts how many letters and numbers there are combined
	alnum_count = number_alnums(alnum0, alnum_count);
	alnum_count = number_alnums(alnum1, alnum_count);
	alnum_count = number_alnums(alnum2, alnum_count);
	alnum_count = number_alnums(alnum3, alnum_count);
	alnum_count = number_alnums(alnum4, alnum_count);
	alnum_count = number_alnums(alnum5, alnum_count);
	alnum_count = number_alnums(alnum6, alnum_count);
	alnum_count = number_alnums(alnum7, alnum_count);
	alnum_count = number_alnums(alnum8, alnum_count);
	alnum_count = number_alnums(alnum9, alnum_count);

	//Determines if a character is a punctuation mark
	punct0 = is_punct(char0);
	punct1 = is_punct(char1);
	punct2 = is_punct(char2);
	punct3 = is_punct(char3);
	punct4 = is_punct(char4);
	punct5 = is_punct(char5);
	punct6 = is_punct(char6);
	punct7 = is_punct(char7);
	punct8 = is_punct(char8);
	punct9 = is_punct(char9);

	//Counts how many characters are punctuation marks
	punct_count = number_puncts(punct0, punct_count);
	punct_count = number_puncts(punct1, punct_count);
	punct_count = number_puncts(punct2, punct_count);
	punct_count = number_puncts(punct3, punct_count);
	punct_count = number_puncts(punct4, punct_count);
	punct_count = number_puncts(punct5, punct_count);
	punct_count = number_puncts(punct6, punct_count);
	punct_count = number_puncts(punct7, punct_count);
	punct_count = number_puncts(punct8, punct_count);
	punct_count = number_puncts(punct9, punct_count);

	//prints the stats of input.dat to output.stats.dat
	print_stats(newline_count, vowel_count, digit_count, alpha_count, lower_count, upper_count, space_count, alnum_count, punct_count);

}