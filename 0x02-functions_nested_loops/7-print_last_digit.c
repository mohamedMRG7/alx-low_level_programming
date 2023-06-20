#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_last_digit - print alphabit
 * @n: is input
 * Return: 0 if upper or 1 if lower
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n *= -1;
	i = n % 10;
	_putchar(&i);
	return (i);
}
