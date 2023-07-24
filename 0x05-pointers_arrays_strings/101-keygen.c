#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * random_character - generates a random character from a predefined char set.
 *
 * Return: The randomly generated character.
 */
char random_character()
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMN\
				OPQRSTUVWXYZ0123456789";
	const int charset_length = sizeof(charset) - 1;
	return charset[rand() % charset_length];
}

/**
 * generate_random_password - generates a random password
 * @length: The desired length of the password.
 */
void generate_random_password(int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		printf("%c", random_character());
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main()
{
	srand(time(NULL));

	int password_length;

	password_length = 10;
	generate_random_password(password_length);

	return 0;
}

