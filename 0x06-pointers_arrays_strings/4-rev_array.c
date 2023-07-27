#include "main.h"

/**
 * reverse_array - Reverses an array of integers.
 * @a: The array to be reversed.
 * @n: The size of the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int swap, begin, end;

	begin = 0;
	end = n - 1;

	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}

