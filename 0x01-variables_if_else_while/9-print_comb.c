#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print num 0 - 9
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
