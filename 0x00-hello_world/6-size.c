#include <stdio.h>
/**
 * main - printing sizes of C data types
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %zu byte(S)\n", sizeof(a));
	printf("Size of an int: %zu byte(S)\n", sizeof(b));
	printf("Size of a long int: %zu byte(S)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(S)\n", sizeof(d));
	printf("Size of a float: %zu byte(S)\n", sizeof(f));
	return (0);
}

