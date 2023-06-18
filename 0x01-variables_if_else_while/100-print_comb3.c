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
	int s;

	for (i = 48; i <= 57 ; i++)
	{
		for (s = i+1; s <= 57; s++)
		{
			putchar(i);
			putchar(s);
			if (i != 57 || s != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		if (i == 57)
			putchar(10);
	}
	return (0);
}
