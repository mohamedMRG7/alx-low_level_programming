#include "main.h"
#include <stdio.h>

/**
* reset_to_98 - check the code
* @n : n
* Return: Always 0.
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	// Skip leading whitespace
	while (s[i] == ' ')
		i++;

	// Check for sign
	if (s[i] == '-' || s[i] == '+') {
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	// Process digits
	while (s[i] >= '0' && s[i] <= '9') {
		int digit = s[i] - '0';

		// Check for overflow
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}

		result = result * 10 + digit;
		i++;
	}

	return sign * result;
}
