#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
/**
* print_binary - check the code
* @n:b
* Return: Always 0.
*/
void print_binary(unsigned long int n)
{
	int shift;
	int bit;

	shift = 63;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (!(n >> shift) && shift > 0)
		shift--;

	while (shift >= 0)
	{
		bit = (n >> shift) & 1;
		_putchar(bit + '0');
		shift--;
	}
}
