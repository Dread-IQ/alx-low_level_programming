#include "main.h"
/**
 * print_sign - Prints the sign of a NO.
 * @n: The NO of which the sign will be printed.
 *
 * Return: 1 if the No is greater than zero,
 * 0 if the NO is greater than zero,
 * And return -1 if the NO is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (0);
	}
}
