#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int cnt = 0;

	while (s[cnt] != '\0')
	{
		cnt++;
	}

	for (cnt -= 1; cnt >= 0; cnt--)
	{
		_putchar(s[cnt]);
	}

	_putchar('\n');
}
