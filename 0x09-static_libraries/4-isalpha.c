#include "main.h"

/**
 * _isalpha - checks for alphabets
 *
 * @c: character
 * Return: 1 if c is a letter, lowercase or uppercase
 *		0 otherwise
*/

int _isalpha(int c)
{

	return (c >= 'A' && c <= 'z');
}
