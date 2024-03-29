#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *		including the terminating null byte (\0),
 *		to the buffer pointed to by dest
 *
 * @dest: destination of string
 * @src: source of string parameter input
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);
}

