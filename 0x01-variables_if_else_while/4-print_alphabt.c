#include <stdio.h>

/**
 * main - print lowercase alphabets except q and e
 *
 * Return:0
 */
int main(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
	{
		if (le != 'e' && let != 'q')
			putchar(le);
	}

	putchar('\n');

	return (0);
}
