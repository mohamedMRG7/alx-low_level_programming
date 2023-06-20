#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _islower - print alphabit
 * @c: is input
 * Return: 0 if upper or 1 if lower
 */
int _islower(int c)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		if (c == alp[i])
		{
			return (1);
		}
	}
	return (0);
}
