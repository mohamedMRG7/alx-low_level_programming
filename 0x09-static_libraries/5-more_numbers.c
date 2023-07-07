#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * pn - print alphabit
 * Return: 0 if upper or 1 if lower
 */
void pn(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		if (i <= 9)
			_putchar('0' + i);
		else
		{
			_putchar(i < 15 ? '0' + i / 10 : '\n');
			if (i < 15)
				_putchar('0' + i % 10);
		}

	}
}
/**
 * more_numbers - print alphabit
 * Return: 0 if upper or 1 if lower
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		pn();
}
