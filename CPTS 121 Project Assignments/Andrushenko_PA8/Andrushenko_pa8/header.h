/*******************************************************************************************

* Programmer: Elijah Andrushenko

* Class: CptS 121, Spring  2016; Lab Section 08

* Programming Assignment: PA8

* Date: April 27th, 2016

* Description: This solves various problems

* History: 04/26/16 Created the String Concatonate function
04/27/16 Created The smallest sum sequence function and the prime sum function

*******************************************************************************************/


#include <stdio.h>
#include <stdlib.h>



char my_str_n_cat(char *destination, const char *source, int n);

int smallest_sum_sequence(int *list, int len);

int sum_primes(unsigned int n);

void bubble_sort(char *list[5], int n);