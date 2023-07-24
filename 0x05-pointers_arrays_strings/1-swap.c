#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: int to swap with b
 * @b: int to swap with a
 *
 */

void swap_int(int *a, int *b)
{
	int a_swap;

	a_swap = *a;
	*a = *b;
	*b = a_swap;
}
