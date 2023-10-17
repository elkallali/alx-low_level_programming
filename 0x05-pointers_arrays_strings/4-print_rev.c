#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 *
 */
void print_rev(char *s)
{
	int countChar = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		countChar++;
	}
	s--;
	for (i = countChar; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
