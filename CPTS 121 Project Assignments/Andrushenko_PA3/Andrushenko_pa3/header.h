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

//Basic header files are here
#include <stdio.h>
#include <math.h>

//Defined Constants are here
#define NEWLINE 1
#define NOT_NEWLINE 0
#define VOWEL 2
#define NOT_VOWEL 0
#define DIGIT 3
#define NOT_DIGIT 0
#define ALPHA 4
#define NOT_ALPHA 0
#define LOWER 5
#define NOT_LOWER 0
#define UPPER 6
#define NOT_UPPER 0
#define WHITESPACE 7
#define NOT_WHITESPACE 0
#define ALNUM 8
#define NOT_ALNUM 0
#define PUNCT 9
#define NOT_PUNCT 0

//Functions are stored here
FILE * open_input_file(void);

char read_character(FILE *infile);

int determine_ascii_value(char char0, char char1, char char2, char char3, char char4, char char5, char char6, char char7, char char8, char char9);

int is_line(char character);

int number_lines(int integer, int current_number_lines);

int is_vowel(char character);

int number_vowels(int character, int current_number_vowels);

int is_digit(char character);

int number_digits(int character, int current_number_digits);

int is_alpha(char character);

int number_alphas(int character, int current_number_alphas);

int is_lower(char character);

int number_lowers(int character, int current_number_lowers);

int is_upper(char character);

int number_uppers(int character, int current_number_uppers);

int is_space(char character);

int number_spaces(int character, int current_number_spaces);

int is_alnum(char character);

int number_alnums(int character, int current_number_alnums);

int is_punct(char character);

int number_puncts(int character, int current_number_puncts);

void print_stats(int item0, int item1, int item2, int item3, int item4, int item5, int item6, int item7, int item8);