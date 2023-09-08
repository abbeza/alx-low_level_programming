#include <stdio.h>
/**
* main - prints numbers from 0-9, using putchar()
* Return: returns zero(success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
