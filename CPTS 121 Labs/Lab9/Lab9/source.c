#include "header.h"

char *reverse_string(char *s)
{
	int i = 0, size = 0, j = 0;
	char c = '\0';
	for (i = 0; s[i] != '\0'; i++)
	{
		size++;
	}

	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
	return s;
}

char *my_strcpy(char *destination, const char *source)
{
	int i = 0, size = 0;
	while (source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return destination;
}

char *my_strcat(char *destination, const char *source)
{
	char *temp = destination;
	while (*temp != '\0')
	{
		temp++;
	}
	my_strcpy(temp, source);

	return destination;
}

int my_strcmp(const char *s1, const char *s2)
{
	int i = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			return -1;
		}
		else if (s2[i] < s1[i])
		{
			return 1;
		}
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return 0;
	}
	else if (s1[i] == '\0')
	{
		return -1;
	}
	else
	{
		return 1;
	}
}
