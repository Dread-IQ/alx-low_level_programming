#include <stdio.h>
/**
 * main - printing alphabets in lowercase and uppercase
 *
 * Return:0
 */

int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		putchar(lett);

	for (lett = 'A'; lett <= 'Z'; lett++)
		putchar(lett);

	putchar('\n');

	return (0);
}
