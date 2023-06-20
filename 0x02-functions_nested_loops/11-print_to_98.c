#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * jack_bauer - print alphabit
 * Return: 0 if upper or 1 if lower
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i < 10)
			_putchar('0' + i);
		else
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10)
		}
		_putchar(',');
		_putchar(' ');

	}
}
