#include "main.h"
/**
 * _strcmp - Compare two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return:
 *	0 if the strings are equal.
 *	A positive value if s1 is greater than s2.
 *	A negative value if s1 is less than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return s1[i] - s2[i];
		i++;
	}

	return (s1[i] - s2[i]);
}

