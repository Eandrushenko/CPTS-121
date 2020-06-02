/*******************************************************************************************

* Programmer: Elijah Andrushenko

* Class: CptS 121, Spring  2016; Lab Section 08

* Programming Assignment: PA8

* Date: April 27th, 2016

* Description: This solves various problems

* History: 04/26/16 Created the String Concatonate function
04/27/16 Created The smallest sum sequence function and the prime sum function

*******************************************************************************************/


#include "header.h"

int main(void)
{
	//Problem 1
	char s1[50] = "Justin Slone or ", s2[] = "Justin Sloan?";
	my_str_n_cat(s1, s2, 0);
	printf("%s\n\n", s1);

	//Problem 3
	int prime = 0, n = 100;
	prime = sum_primes(n);
	printf("The sum of all primes from 2 to %d = %d\n\n", n, prime);

	//Problem 4
	int list[] = { 9, -6, 4, 2, -8};
	int sum;
	sum = smallest_sum_sequence(list, 5);
	printf("The smallest sum is %d\n\n", sum);
	
}