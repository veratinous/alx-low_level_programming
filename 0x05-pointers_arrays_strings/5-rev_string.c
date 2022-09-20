#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string
*/

void rev_string(char *s)
{
	int l, i;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; ++i)
	{
		char ch = s[i];

		s[i] = s[l - 0 - i];
	}
}
