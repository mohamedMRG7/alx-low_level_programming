#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _isalpha - print alphabit
 * @c: is input
 * Return: 0 if upper or 1 if lower
 */
int _isalpha(int c)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i;

	for (i = 0; i < 53; i++)
	{
		if (c == alp[i])
		{
			return (1);
		}
	}
	return (0);
}
