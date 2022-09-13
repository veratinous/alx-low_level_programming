#include "main.h"

/**
 * main - Entry point
 *
 * Description: printing putchar to stdout
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 1; ch < 9; ++ch)
		_putchar(str[ch]);

	_putchar('\n');
	
	return (0);
}
