#include <stdio.h>                                                                                                                      
/**                                                                                                                                     
 * main - printing alphabets in lowercase                                                                                               
 *
 * Return:0
 */   

int main(void)
{
	char alphabet = 'a';

       	while (alphabet <= 'z')
       	{
		putchar(alphabet);
		alphabet++;
	}
	char ALPHABET;

	for (ALPHABET = 'A'; ALPHABET <= 'Z' ; ALPHABET++)
	{
		putchar(ALPHABET);
	}
		putchar('\n');
		return (0);                                                                                                     
}     
