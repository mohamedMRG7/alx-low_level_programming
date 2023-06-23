#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <limits.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_number - print alphabit
 *@number : d
 * Return: 0 if upper or 1 if lower
 */
void print_number(int number)
{
	char buffer[20];
	int i = 0;
	int j = 0;
	int ismin = 0;

	if (number < 0)
	{
		number *= -1;
		ismin = 1;
	}
	do {
		buffer[i++] = (number % 10) + '0';
		number /= 10;
	} while (number > 0);
	if (ismin == 1)
		_putchar('-');
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
}
