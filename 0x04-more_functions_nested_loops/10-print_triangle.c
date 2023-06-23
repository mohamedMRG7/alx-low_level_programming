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
void printspace(int n,int hash)
{
	while (n)
	{
		_putchar(' ');
		n--;
	}
	while (hash)
	{
		_putchar('#');
		hash--;
	}
}
/**
 * print_square - print alphabit
 *@n: is input
 * Return: 0 if upper or 1 if lower
 */
void print_triangle(int n)
{
	int i;
	int hash = 1;

	if (n > 0)
	{
		for (i = 0; i < n ; i++)
		{
			printspace(n-hash,hash);
			_putchar('\n');
			hash++;
		}
	}
	else
		_putchar('\n');
}
