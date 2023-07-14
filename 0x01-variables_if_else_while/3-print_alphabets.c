#include <stdio.h>

/**
 * main - Entry pont
 *
 * Return: Always 0
 */

int main(void)
{
	char ch_s;
	char ch_b;

	for (ch_s = 'a'; ch_s <= 'z'; ch_s++)
	{
		putchar(ch_s);
	}

	for (ch_b = 'A'; ch_b <= 'Z'; ch_b++)
	{
		putchar(ch_b);
	}

	putchar('\n');

	return (0);
}
