#include "main.h"

/**
 * rev_string - Reverses a string in place.
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	char *begin = s;
	char *end = s;

	if (s)
	{
		/* Move the end pointer to the end of the string */
		while (*end)
			end++;

		end--;

		/* Swap the characters at the beginning and end of the string */
		while (begin < end)
		{
			char tmp = *begin;

			*begin = *end;
			*end = tmp;

			begin++;
			end--;
		}
	}
}
