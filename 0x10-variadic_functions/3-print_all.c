#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print anything based on the format.
 * @format: A list of types of arguments passed to the function.
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator;
	int i;
	char current_format;

	va_start(args, format);
	i = 0;
	separator = "";
	while (format && format[i])
	{
		current_format = format[i];
		switch (current_format)
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			break;
		case 's':
		{
			char *str;

			str = va_arg(args, char*);
			if (!str)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
		}
		default:
			break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
