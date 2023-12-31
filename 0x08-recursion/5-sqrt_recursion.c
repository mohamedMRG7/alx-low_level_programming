#include "main.h"
#include <stdio.h>
/**
* _sqrt_recursion_helper - check the code
*@n :n
*@start:n
*@end:e
* Return: Always 0.
*/
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid;
	int square;

	mid = (start + end) / 2;
	square = mid * mid;
	if (start > end)
		return (-1);
	if (square == n)
	{
		return (mid);
	} else if (square < n)
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	} else if (square > n)
	{
		return (_sqrt_recursion_helper(n, start, mid - 1));
	}
	return (0);
}
/**
 * _sqrt_recursion - check the code
 *@n :n
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 0, n));
}
