#include "main.h"

/**
 * _isdigit - Check if numbers are 0 - 9
 * @c: Character to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
