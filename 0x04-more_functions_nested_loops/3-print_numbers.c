#include "main.h"

/**
 * print_numbers - numbers between 0 - 9
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	_putchar('\n');
}
