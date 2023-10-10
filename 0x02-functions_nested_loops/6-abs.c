#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n : number
 *
 * Return: 1 if true 0 if flase
 */

int _abs(int n)
{

	if (n < 0)
		n *= -1;
	return (n);
}
