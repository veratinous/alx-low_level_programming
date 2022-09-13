#include "main.h"

/**
 * main - prints lowercase letters
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch;

	while (ch = 'a', ch < 'z', ++ch)
		_putchar(ch);

	_putchar('\n');
	return (0);
}
