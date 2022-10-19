#include "main.h"
/**
 * print_alphabet_x10 - Printing 10 times alphabets in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char lr;

	while (count++ <= 9)
	{

		for (lr = 'a'; lr <= 'z'; lr++)
			_putchar(lr);
		_putchar('\n');
	}
}
