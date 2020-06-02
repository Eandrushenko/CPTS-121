#include "header.h"

int evens(int n)
{
	n = n / 2;
	printf("%d\n", n);
	return n;
}

int odds(int n)
{
	n = (n * 3) + 1;
	printf("%d\n", n);
	return n;
}