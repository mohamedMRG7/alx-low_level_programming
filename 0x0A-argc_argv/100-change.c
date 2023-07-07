#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * checkmods - check the code
 * @num:argc
 * Return: Always 0.
 */
int checkmods(int num)
{
	int res;

	res = 0;
	if (num % 25 == 0)
		res = num / 25;
	else if (num % 10 == 0)
		res = num / 10;
	else if (num % 5 == 0)
		res = num / 5;
	else if (num % 2 == 0)
		res = num / 2;
	return (res);
}
/**
* main - check the code
* @argc:argc
* @argv : argv
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int num;
	int rs;

	if (argc < 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	rs = 0;
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (checkmods(num) != 0)
		printf("%d\n", checkmods(num));
	else
	{
		if (num > 25)
			rs = (num / 25) + (checkmods(num % 25) != 0 ?
					   checkmods(num % 25) : num % 25);
		if (num < 25 && num > 10)
			rs = (num / 10) + (checkmods(num % 10) != 0 ?
					   checkmods(num % 10) : num % 10);
		if (num > 5 && num < 10)
			rs = (num / 5) + (checkmods(num % 5) != 0 ?
					   checkmods(num % 5) : num % 5);
		if (num > 2 && num < 5)
			rs = (num / 2) + (checkmods(num % 2) != 0 ?
					  checkmods(num % 2) : num % 2);
		printf("%d\n", rs);
	}
	return (0);
}
