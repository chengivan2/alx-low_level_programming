/**
 * _strncpy - Copy a string.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: The number of characters to copy.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy at most n characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

