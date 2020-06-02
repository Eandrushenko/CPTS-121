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


/*************************************************************
* Function: my_str_n_cat()
* Date Created: 04/26/16
* Date Last Modified: 04/26/16
* Description: This function concatonates one string to the other
* Input parameters: *destination, *source, n
* Returns: destination
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
char my_str_n_cat(char *destination, const char *source, int n)
{
	char *temp = destination;
	while (*temp != '\0')
	{
		temp++;
	}


	while (source[n] != '\0')
	{
		temp[n] = source[n];
		n++;
	}
	temp[n] = '\0';

	return destination;
}


/*************************************************************
* Function: smallest_sum_sequence()
* Date Created: 04/27/16
* Date Last Modified: 04/27/16
* Description: This functions finds the smallest sum sequence in a list on integers
* Input parameters: *list, len
* Returns: min
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int smallest_sum_sequence(int *list, int len)
{
	int i = 0, j = 0, sum = 0, min = 9999999999999;
	for (i = 0; i != len; i++)
	{
		j = i;
		while ((list[j] < 0) & (list[j] != list[len-1]))
		{
			sum += list[j];
			j++;

			if ((list[j] == list[len - 2]) & (list[j] < 0) & (list[len-1] < 0))
			{
				sum += list[len-1];
			}
		}

		if (sum < min)
		{
			min = sum;
		}
		sum = 0;
	}

	//In case of all positive numbers in the list
	if (min == 0)
	{
		min = 9999999;
		i = 0;
		for (i = 0; i != len; i++)
		{
			if (list[i] < min)
			{
				min = list[i];
			}
		}
	}
	return min;

	
}


/*************************************************************
* Function: sum_primes()
* Date Created: 04/27/16
* Date Last Modified: 04/27/16
* Description: This function adds all the primes from 2 to n
* Input parameters: n
* Returns: n + sum_primes(n-1)
* Preconditions: N/A
* Postconditions: N/A
*************************************************************/
int sum_primes(unsigned int n) 
{
	unsigned int i = 5;

	if (n < 2)
	{
		return 0;
	}
	if (n == 2)
	{
		return 2;
	}
	if (n < 5)
	{
		return 5;
	}
	if ((n & 1) == 0 || (n % 3) == 0)
	{
		return sum_primes(n - 1);
	}
	for (unsigned int i = 5; i*i <= n; i += 6)
	{
		if ((n % i) == 0)
		{
			return sum_primes(n - 1);
		}

		if ((n % (i + 2)) == 0)
		{
			return sum_primes(n - 1);
		}
	}
	return n + sum_primes(n - 1);
}



