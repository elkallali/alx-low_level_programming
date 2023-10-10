#include "main.h"
/**
 *print_alphabet_x10 - function that prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	int counter;
	int character;

	for (counter = 0; counter < 10; counter++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}
}
