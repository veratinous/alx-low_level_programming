#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int j = 0;
	int i = 0;

	while (j >= 0)
	{
		if (s[i] != '\0')
			i++;
		else
			break;

	}
	return (i);
}
