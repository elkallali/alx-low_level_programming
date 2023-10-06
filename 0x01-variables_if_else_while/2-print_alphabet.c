#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int character;

	for (character = 97; character < 123; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
