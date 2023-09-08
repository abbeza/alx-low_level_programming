#include <stdio.h>
/**
* main - prints all number of base 16 in lowercase, using putchar()
* Return: returns zero(success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
