#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - check the code
* @name:n
*@f:f
* Return: Always 0.
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
