#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * _isdigit - print alphabit
 * @c: is input
 * Return: 0 if upper or 1 if lower
 */
int _isdigit(int c)
{
	int i;

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
