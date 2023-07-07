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
 * getmods - check the code
 * @num:argc
 * Return: Always 0.
 */
int getmods(int num)
{
	int res;

	res = 0;
	if (num >= 25)
		res = num / 25 + (num % 25 != 0 ? getmods(num % 25) : 0);
	else if (num >= 10 && num < 25)
		res = num / 10 + (num % 10 != 0 ? getmods(num % 10) : 0);
	else if (num >= 5 && num < 10)
		res = num / 5 + (num % 5 != 0 ? getmods(num % 5) : 0);
	else if (num >= 2 && num < 5)
		res = num / 2 + (num % 2 != 0 ? getmods(num % 2) : 0);
	else
		res = 1;
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
	if (num > 25)
		rs = (num / 25) + getmods(num % 25);
	if (num < 25 && num > 10)
		rs = (num / 10) + getmods(num % 10);
	if (num > 5 && num < 10)
		rs = (num / 5) + getmods(num % 5);
	if (num > 2 && num < 5)
		rs = (num / 2) + getmods(num % 2);
	if (num == 1)
		rs = 1;
	printf("%d\n", rs);

	return (0);
}
