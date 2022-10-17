#include <stdio.h>
/**
 * main - printing lowercase alphabets in reverse
 *
 * Return:0
 */
int main(void)
{
	char mar;

	for (mar = 'z'; mar >= 'a'; mar--)
		putchar(mar);

	putchar('\n');

	return (0);
}
