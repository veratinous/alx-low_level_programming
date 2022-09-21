#include "main.h"

/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int *start_c, *end_c, c;
	int i;

	start_c = a;
	end_c = a;

	for (i = 0; i < n - 1; i++)
	{
		end_c++;
	}




	for (i = 0; i < n / 2; i++)
	{


		c = *end_c;
		*end_c = *start_c;
		*start_c = c;
		start_c++;
		end_c--;
	}

}
