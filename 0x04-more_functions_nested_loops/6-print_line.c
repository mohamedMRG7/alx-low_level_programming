#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_line - print alphabit
 *@n: is input
 * Return: 0 if upper or 1 if lower
 */
void print_line(int n)
{
	if (n > 0)
		while (n)
		{
			_putchar('_');
			if (n == 1)
				_putchar('\n');
			n--;
		}
	else
		_putchar('\n');
}
