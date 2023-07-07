#include "main.h"
#include <stdio.h>
/**
* isprim - check the code
*@n:n
*@num:num
* Return: Always 0.
*/
int isprim(int n, int num)
{
	int s = 1;

	if (n < num)
		return (0);
	if (n == num)
		return (1);
	if (n % num == 0)
		return (0);
	s = s * isprim(n, num + 1);
	return (s);
}
/**
 * is_prime_number - check the code
 *@n:n
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int prim = isprim(n, 2);

	if (prim > 0)
		return (1);
	return (0);
}
