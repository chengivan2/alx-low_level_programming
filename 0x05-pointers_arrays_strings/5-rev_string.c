#include "main.h"

/**
 * rev_string - Prints string in reverse
 *
 * @s: the string
 */

void rev_string(char *s)
{
	int i, j cnt;
	char *a, adr;

	a = s;

	while (s[cnt] != '\0')
	{
		cnt++;
	}

	for (j = 1; j < cnt; j++)
	{
		a++;
	}

	for (i = 0; i < (cnt / 2); i++)
	{
		adr = s[i];
		s[i] = *a;
		*a = adr;
		a--;
	}
}
