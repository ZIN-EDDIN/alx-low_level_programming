#include "main.h"

/**
*_abs - Computes the absolute value of an integer.
*@n : number to compute
*Return: the absplute value of number, else 0
*/
int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return	(abs_val);
	}
	return	(n);
}
