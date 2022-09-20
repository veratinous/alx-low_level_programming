#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 *
 * @a: integer a
 * @b: integer b
*/

void swap_int(int *a, int *b)
{
	int p = *a;
	int m = *b;
	*b = p;
	*a = m;
}
