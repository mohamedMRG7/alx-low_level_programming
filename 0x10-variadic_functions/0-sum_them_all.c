#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - check the code
* @n:n
* Return: Always 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	int i;

	if (n <= 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
