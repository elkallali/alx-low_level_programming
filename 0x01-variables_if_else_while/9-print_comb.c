#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int oneDigit = 0;

	while (oneDigit < 10)
	{
		putchar('0' + oneDigit);
		if (oneDigit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		oneDigit++;
	}
	putchar('\n');
	return (0);
}
