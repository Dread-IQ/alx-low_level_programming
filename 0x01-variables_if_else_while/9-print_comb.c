#include <stdio.h>
/**
 * main - printing combinations of sinle digit nums
 *
 * Return:0
 */
int main(void)
{
	int me;

	for (me = 0; me <= 9; me++)
	{
		putchar((me % 10) + '0');
		if (me == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
