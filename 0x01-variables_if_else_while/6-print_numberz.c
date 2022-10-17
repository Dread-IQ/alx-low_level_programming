#include <stdio.h>
/**
 * main - printing single digit  base 10 nums with putchar
 *
 * Return:0
 */
int main(void)
{
	int no;

	for (no = 0; no < 10; no++)
		putchar((no % 10) + '0');

	putchar('\n');

	return (0);
}
