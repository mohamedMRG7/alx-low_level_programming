#include "main.h"
#include <stdio.h>
/**
 * sizef - check the code
 * @c : c
 * @s : s
 * Return: Always 0.
 */
int sizef(char *c, int s)
{
	if(c[s] == '\0')
		return s;
	return sizef(c,s + 1);
}
/**
* _strlen_recursion - check the code
*
* Return: Always 0.
*/
int _strlen_recursion(char *s)
{
	return sizef(s,0);
}
