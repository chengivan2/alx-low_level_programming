#include "main.h"

/**
 * string_toupper - Changes lowercase letters to uppercase.
 * @s: The string to be analyzed.
 *
 * Return: A string with all letters in uppercase.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}

	return (s);
}

