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
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (minute < 10)
				_putchar('0');
			_putchar("0" + hour);
			_putchar(':');
			_putchar("0" + minute);
			_putchar('\n');
		}
	}
}
