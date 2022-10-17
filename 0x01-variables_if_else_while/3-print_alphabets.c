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
	char alphabets;

	for (alphabets = 'A'; alphabets <= 'Z' ; alphabets++)
	{
		putchar(alphabets);
	}
		putchar('\n');
		return (0);                                                                                                     
}     
