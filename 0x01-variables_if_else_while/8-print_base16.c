#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printting base 16 numbers in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 48; /*decimal rep of 0*/

	while (digit <= 102) /* 102, decimal rep of f*/
	{
		if (digit == 57)
			digit += 39;
		++digit;
	}
	putchar('\n');
	return (0);
}
