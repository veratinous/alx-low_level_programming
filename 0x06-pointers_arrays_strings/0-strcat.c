#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
