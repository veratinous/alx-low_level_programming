#include "main.h"

/**
 * main - prints lowercase letters
 *
 * Return: 0 (success)
*/

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		++ch;
	}

	_putchar('\n');
	return (0);
}
