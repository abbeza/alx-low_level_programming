#include <stdio.h>
/**
* main - prints alphabets in lawercase and skips 'q' and 'e', useing putchar()
* Return: returns zero(success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}
	putchar('\n');
	return (0);
}
