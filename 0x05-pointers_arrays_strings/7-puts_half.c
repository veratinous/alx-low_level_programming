#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string
*/

void puts_half(char *str)
{
	int i;
	int n;


	for (i = 0; str[i] != '\0'; ++i)
		continue;

	n = i / 2;

	if (n % 2 == 0)
	{
		int j;

		for (j = 0; j <= n; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else
	{
		for (; n <= i; n++)
		{
			_putchar(str[n]);
		}
		_putchar('\n');
	}
}
