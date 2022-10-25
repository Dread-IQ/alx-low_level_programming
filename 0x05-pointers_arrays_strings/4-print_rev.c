#include "hamza.h"
#include <stdlib.h>
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

int main(void)

{
	    char *str;

	        str = "I do not fear computers. I fear the lack of them - Isaac Asimov";

		    print_rev(str);

		    return (0);
}
