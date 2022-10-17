#include <stdio.h>
/**
 * main - printing alphabets in lowercase and uppercase
 *
 * Return:0
 */

int main(void)
{
	int ch;

        clrscr();

	for (ch = ‘a’; ch <= ‘z’; ch++)
		putchar(ch);

	for (ch = ‘A’; ch <= ‘Z’; ch++)
		putchar(ch);

	putchar("\n");
	getch();
	return (0);
}
