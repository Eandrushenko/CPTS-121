#include "header.h"

void construct_word(char *article[], char *verb[], char *noun[], char *preposition[])
{
	int sentence = 0, word = 0, index = 0, clear = 0;
	char output[100] = { '\0' };

	for (sentence = 0; sentence < 20; sentence++)
	{
		for (word = 0; word <= 5; word++)
		{
			index = (rand() % 6);
			if (index != 0)
			{
				index--;
			}
			if (word == 0)
			{
				strcat(output, article[index]);
				output[0] = toupper((int)output[0]);
			}
			else if (word == 1)
			{
				strcat(output, " ");
				strcat(output, noun[index]);

			}
			else if (word == 2)
			{
				strcat(output, " ");
				strcat(output, verb[index]);
			}
			else if (word == 3)
			{
				strcat(output, " ");
				strcat(output, preposition[index]);
			}
			else if (word == 4)
			{
				strcat(output, " ");
				strcat(output, article[index]);
			}
			else if (word == 5)
			{
				strcat(output, " ");
				strcat(output, noun[index]);
				strcat(output, "!\n");
				printf("%s", output);
				for (clear = 0; clear < 100; clear++)
				{
					output[clear] = '\0';
				}
			}

		}
	}
}