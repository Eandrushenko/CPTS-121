#include "header.h"

int main(void)
{
	char mystring[8] = { 'r', 'a', 'c', 'e', 'c', 'a', 'r', '\0' };
	reverse_string(mystring);
	printf("%s\n\n", mystring);

	char source_string[] = "Pizza", destination_string[6] = { '\0' };
	my_strcpy(destination_string, source_string);
	printf("%s\n\n", destination_string);

	char s1[50] = "Cpts", s2[] = " is fun!";
	my_strcat(s1, s2);
	printf("%s\n\n", s1);

	char str1[] = "Computers", str2[] = "Mathematics";
	int check = 0;
	check = my_strcmp(str1, str2);
	printf("%d\n\n", check);




	return 0;
}