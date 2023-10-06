#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (character == 'e' || character == 'q')
			continue;
		putchar(character);
	}
	putchar('\n');
	return (0);
}
