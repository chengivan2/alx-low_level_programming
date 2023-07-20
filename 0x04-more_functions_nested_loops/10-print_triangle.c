#include "main.h"

/**
 * print_triangle - prints a triangle of size n
 * @n: the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
				_putchar(' ');

			for (j = 0; j <= i; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
