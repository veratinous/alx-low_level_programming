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
	}
	else if (i % 2)
	{
		for (n = (i - 1) / 2; n <= i - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
