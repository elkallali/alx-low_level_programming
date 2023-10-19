#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array to reverse
 * @n: number of caracter
 */
void reverse_array(int *a, int n)
{
	int i, j, tempo;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tempo = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = tempo;
		}
	}
}
