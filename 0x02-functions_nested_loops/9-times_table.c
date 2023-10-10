#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, multipl, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multipl = 1; multipl <= 9; multipl++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multipl;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
