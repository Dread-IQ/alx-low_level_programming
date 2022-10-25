#include "hamza.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
	int index = 0, rs = 0, n;

	while (str[index++])
		rs++;

	if ((rs % 2) == 0)
		n = rs / 2;

	else
		n = (rs + 1) / 2;

	for (index = n; index < rs; index++)
		_putchar(str[index]);

	_putchar('\n');
}
