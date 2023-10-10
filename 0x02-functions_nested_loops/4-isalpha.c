#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c : character
 *
 * Return: 1 if true 0 if flase
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 99))
		return (1);
	else
		return (0);
}
