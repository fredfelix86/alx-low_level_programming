#include "main.h"

/**
 * more_numbers - 0 - 14 ten times
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
	{
			if (j >= 10)
			_putchar('1');
			_putchar((j % 10) + '0');
	}
			_putchar('\n');
	}
}
