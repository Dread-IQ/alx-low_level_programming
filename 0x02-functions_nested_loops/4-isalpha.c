#include "main.h"
/**
 * _isalpha - Checks if a char is alphabetic.
 * @c: The char to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, return 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
