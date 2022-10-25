#include "hamza.h"

/**
 * puts2 - Prints one char out of two of a string.
 * @str: The string containing characters.
 */

void puts2(char *str)
{

		int index = 0, rs = 0;
		
		while (str[index++])
			rs++;

		for (index = 0; index < rs; index += 2)
				_putchar(str[index]);
				_putchar('\n');
}
