#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet();

void print_alphabet()
{
	char c[] = "abcdfghijklmnoprstuvwxyz\n";
	int i;

	for (i = 0; i < 25; i++)
	{
		_putchar(c[i]);
	}
}
