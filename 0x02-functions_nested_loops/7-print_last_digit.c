#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n : number
 *
 * Return: 1 if true 0 if flase
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
