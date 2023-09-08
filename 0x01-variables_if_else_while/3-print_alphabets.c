#include <stdio.h>
#include <ctype.h>
/**
* main - prints alphabets in lawercase and uppercase, using putchar()
* Return: returns zero(success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
