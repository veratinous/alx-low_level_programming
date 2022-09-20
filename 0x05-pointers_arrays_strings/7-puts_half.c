#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string
*/

void puts_half(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; ++i)
		continue;
	int n = i / 2;

	int j;

	if (n % 2 == 0)
	{
		for (j = 0; j <= n; j++)
			_putchar(str[j]);
	}
	else
		for (; n <= i; n++)
			_putchar(str[n]);
}

