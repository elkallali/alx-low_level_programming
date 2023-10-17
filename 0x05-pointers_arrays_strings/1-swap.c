#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a : first number
 * @b : second number
 */
void swap_int(int *a, int *b)
{
	int intermediat;

	intermediat = *a;
	*a = *b;
	*b = intermediat;
}
