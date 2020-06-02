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

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Level Functions
void level1(int *score);
void level2(int *score);
void level3(int *score);
void level4(int *score);
void level5(int *score);

//Menu Functions
int main_menu(void);
void intro_program(void);
void difficulty_menu(void);
