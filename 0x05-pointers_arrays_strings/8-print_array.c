#include "main.h"
#include <stdio.h>

/**
* print_array - check the code
*@s :s
*@n :a
* Return: Always 0.
*/
void print_array(int *s, int n)
{

	int i = 0;

	while (i < n)
	{
		printf("%d", s[i]);
		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}
