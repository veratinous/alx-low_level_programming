#include "main.h"

/**
 * main - prints lowercase letters
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch < 'z')
	{
		_putchar(ch);
		++ch;
	}

	_putchar('\n');
	return (0);
}
