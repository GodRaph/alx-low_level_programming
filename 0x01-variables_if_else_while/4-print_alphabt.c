#include <stdio.h>

/**
 * main - program that prints the alphabets in lowercase and upper case
 *
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}


	putchar('\n');

	return (0);
}
