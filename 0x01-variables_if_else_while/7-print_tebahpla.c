#include <stdio.h>
/**
* main - prints alphabets in reverse, using putchar()
* Return: returns zero(success)
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
