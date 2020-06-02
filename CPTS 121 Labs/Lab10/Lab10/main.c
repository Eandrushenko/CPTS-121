#include "header.h"

int main(void)
{
	char *article[5] = { "the", "a", "one", "some", "any" };
	char *noun[5] = { "boy", "girl", "dog", "town", "car" };
	char *verb[5] = { "drove", "jumped", "ran", "walked", "skipped" };
	char *preposition[5] = { "to", "from", "over", "under", "on" };

	srand((unsigned int) time (NULL));

	construct_word(article, verb, noun, preposition);

	return 0;
}