#include <stdio.h>
/**
 * main - printing combinations of two different digits
 *
 * Return:0
 */
int main(void)
{
	int dt1, dt2;

	for (dt1 = 0; dt1 < 9; dt1++)
	{
		for (dt2 = dt1 + 1; dt2 < 10; dt2++)
		{
			putchar((dt1 % 10) + '0');
			putchar((dt2 % 10) + '0');

			if (dt1 == 8 && dt2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
