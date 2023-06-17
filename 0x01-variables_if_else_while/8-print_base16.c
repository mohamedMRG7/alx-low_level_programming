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
		putchar(i);
		if (i == 57)
			for (s = 97; s <= 102; s++)
			{
				putchar(s);
				if (s == 90)
				{
					putchar(10);
				}
			}
	}
	return (0);
}
