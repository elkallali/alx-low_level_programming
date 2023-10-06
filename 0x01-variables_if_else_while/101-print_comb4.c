#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;


	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 1; digit2 <= 9; digit2++)
		{
			for (digit3 = 1; digit3 <= 9; digit3++)
			{
				if (digit1 != digit2 && digit1 != digit3 && digit2 != digit3 &&
					digit1 < digit2 && digit2 < digit3)
				{
					putchar('0' + digit1);
					putchar('0' + digit2);
					putchar('0' + digit3);
					if (digit1 + digit2 + digit3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
