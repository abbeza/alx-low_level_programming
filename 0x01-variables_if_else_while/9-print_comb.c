#include <stdio.h>
/**
* main - prints numbers from 0-9,separated by comma using putchar()
* Return: returns zero(success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
