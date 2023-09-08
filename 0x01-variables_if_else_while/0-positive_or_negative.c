#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/* more headers goes there */
/**
  * main - prints negative,zero or postive
  * Return: returns zero(success)
  */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n",n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	else
	{
		printf("%d is zero\n",n);
	}

	return (0);
}

