#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];  /* +1 for null terminator */
	int i;

	srand(time(NULL));

	/* Generate random password */
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 94 + 33;  /* ASCII code range for printable characters */
	}
	password[PASSWORD_LENGTH] = '\0';

	/* Print password */
	printf("%s\n", password);

	return 0;
}
