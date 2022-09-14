#include "main.h"

/**
 * _abs - prints the absolute value of a number
 *
 * @n: number
 *
 * Return: 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		_putchar(-n);
	return (n);
}
