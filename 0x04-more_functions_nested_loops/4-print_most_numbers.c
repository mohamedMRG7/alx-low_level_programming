#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_most_numbers - print alphabit
 * Return: 0 if upper or 1 if lower
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if(i != '2' && i != '4')
			_putchar(i);
		if (i == '9')
			_putchar('\n');
	}
}
