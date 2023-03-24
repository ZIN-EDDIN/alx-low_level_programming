#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: is a number to check
 * Return: 1 if 'n' is positive, -1 if it is negative and 0 when n = 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return	(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return	(-1);
	}
	else
	{
		_putchar(48);
		return	(0);
	}
}
