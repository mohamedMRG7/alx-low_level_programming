#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * printspace - print alphabit
 *@n: is input
 * Return: 0 if upper or 1 if lower
 */
void printspace(int n)
{
	while (n)
	{
		_putchar(' ');
		n--;
	}
}
/**
 * print_line - print alphabit
 *@n: is input
 * Return: 0 if upper or 1 if lower
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n ; i++)
		{
			printspace(i);
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
