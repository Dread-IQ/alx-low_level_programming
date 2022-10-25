#include "hamza.h"

/**
 * rev_string - Reverses a string.
 * @s: The string.
 */

void rev_string(char *s)

{
			int rs = 0, index = 0;

			char tmp;
			
			while (s[index++])
				rs++;

			for (index = rs - 1; index >= rs / 2; index--)
			{
				tmp = s[index];
				s[index] = s[rs - index - 1];
				s[rs - index - 1] = tmp;
			}
}
