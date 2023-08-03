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
	if (n > 0)
	{
		print_binary(n / 2);
		_putchar(n % 2 > 0 ? '1' : '0');
	}
}
