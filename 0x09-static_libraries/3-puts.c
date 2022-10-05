#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *
 * @str: string
*/

void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
		else
		{
			_putchar('\n');
			break;
		}
		i++;
	}
}
