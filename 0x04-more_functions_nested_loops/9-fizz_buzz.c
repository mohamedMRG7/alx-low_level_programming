#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * fizz - print alphabit
 * Return: 0 if upper or 1 if lower
 */
void fizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
	_putchar(' ');
}
/**
 * buzz - print alphabit
 * Return: 0 if upper or 1 if lower
 */
void buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
	_putchar(' ');
}
/**
 * fizzbuzz - print alphabit
 * Return: 0 if upper or 1 if lower
 */
void fizzbuzz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
	_putchar(' ');
}
/**
 * pn - print alphabit
 * Return: 0 if upper or 1 if lower
 */
void pn(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			fizzbuzz();
		else if (i % 5 == 0)
			buzz();
		else if (i % 3 == 0)
			fizz();
		else
		{
			if (i <= 9)
			{
				_putchar('0' + i);
				_putchar(' ');
			}
			else
			{
				_putchar(i < 100 ? '0' + i / 10 : '\n');
				if (i < 100)
					_putchar('0' + i % 10);
				_putchar(' ');
			}
		}

		if (i == 100)
			_putchar('\n');

	}
}
/**
 * main - print alphabit
 * Return: 0 if upper or 1 if lower
 */
int main(void)
{
	pn();
	return (0);
}
