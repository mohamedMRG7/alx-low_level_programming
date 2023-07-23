#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - check the code
* @n:n
* @separator :s
* Return: Always 0.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		printf("%s", s == NULL ? "(nil)" : s);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
