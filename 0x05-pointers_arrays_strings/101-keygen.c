#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 9

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
	for (i = 0; i < PASSWORD_LENGTH - 1; i++)
	{
		password[i] = rand() % 94 + 33;  /* ASCII code range for printable characters */
	}

	/* Generate last character to make password valid for 101-crackme */
	password[PASSWORD_LENGTH - 1] = (char)((password[0] + password[1]) ^ 42) % 94 + 33;
	password[PASSWORD_LENGTH] = '\0';

	/* Print password */
	printf("%s\n", password);

	return (0);
}
