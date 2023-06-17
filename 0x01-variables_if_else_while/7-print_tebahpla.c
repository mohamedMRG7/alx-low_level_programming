#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97 ; i--)
	{
		putchar(i);
		if (i == 97)
			putchar(10);
	}
	return (0);
}
