#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int str_length = 0;
	char *y = str;
	int i;

	while (*y != '\0')
	{
		y++;
		str_length++;
	}
	str_length--;
	for (i = 0; i <= str_length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
