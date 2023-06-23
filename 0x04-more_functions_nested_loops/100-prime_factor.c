#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - print alphabit
 * Return: 0 if upper or 1 if lower
 */
int main(void)
{
	long num;
	int i;
	long prim;

	i = 2;
	num = 612852475143;
	prim = 0;
	while (num /i != 1)
	{
		if (num % i == 0)
		{
			num = num / i;
			if (i > prim)
				prim = i;
		}else
			i++;
	}
	printf("%ld\n",prim);
	return (0);
}
