#include "main.h"

/**
 * print_alphabet_x10 - prints alphabeths 10 times
*/

void print_alphabet_x10(void)
{
	int count;

	while (count <= 11)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			++ch;
		}
		++count;
	}
}
