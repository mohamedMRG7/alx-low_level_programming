#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print - print alphabit
 *@number : d
 * Return: 0 if upper or 1 if lower
 */
void print(int number)
{
	char buffer[20];
	int i = 0;
	int j = 0;

	do {
		buffer[i++] = (number % 10) + '0';
		number /= 10;
	} while (number > 0);
	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
}
/**
 * _putchar - print alphabit
 *@c : d
 * Return: 0 if upper or 1 if lower
 */
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
	while (num / i != 1)
	{
		if (num % i == 0)
		{
			num = num / i;
			if (i > prim)
				prim = i;
		} else
			i++;
	}
	print(50829599);
	_putchar('\n');
	return (0);
}
