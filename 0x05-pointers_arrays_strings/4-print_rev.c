#include "hamza.h"

/**
 * print_rev - Prints a reversed string.
 * @s: The string.
 */

void print_rev(char *s)

{
	int rs = 0, index;

	while (s[index++])
		rs++;

	for (index = rs - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
