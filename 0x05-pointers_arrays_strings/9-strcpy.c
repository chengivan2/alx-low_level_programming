#include "main.h"

/**
 * _strcpy - Copy the content of one var to another
 * @dest: This is destiny
 * @src: This is the copia
 *
 * Return: This return copy
 */

char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (s);
}
