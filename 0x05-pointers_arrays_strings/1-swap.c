#include "holberton.h"



/**
 * swap_int - Swaping the values of two integers.
 * @a: The first integer.
 * @b: The second int.
*/

void swap_int(int *a, int *b)

{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
