#include "main.h"

/**
 * _strlen - Returns length of string
 *
 * @s: String to determine length
 *
 * Return: returns value of cnt
 */

int _strlen(char *s)
{
	int cnt = 0;

	for (; *s != '\0'; s++)
	{
		cnt++;
	}

	return (cnt);
}
