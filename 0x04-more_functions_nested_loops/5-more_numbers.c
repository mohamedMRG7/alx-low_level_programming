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

	for (i = 0; i <= 14; i++)
	{
		if (i<= 9)
			_putchar('0' + i);
		else
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		if (i == 14)
			_putchar('\n');
	}
}
/**
 * more_numbers - print alphabit
 * Return: 0 if upper or 1 if lower
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		pn();
}
