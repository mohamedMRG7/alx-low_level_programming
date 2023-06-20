#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - print alphabit
 *
 * Void
 */
void print_alphabet_x10(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 27; i++)
		{
			_putchar(c[i]);
		}
	}
}
