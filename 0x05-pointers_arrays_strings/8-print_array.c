#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by a new line.
 * @a: pointer to the array.
 * @n: number of elements to print.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0 || a == NULL)
	{
		/* Invalid input or empty array, nothing to print */
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		/* Print a comma and space for all elements except the last one */
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}

