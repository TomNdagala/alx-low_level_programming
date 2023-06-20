#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 for + -1 for - and 0 for all other 
 */
int print_sign(int n)
{
	if (n>0)
	{
	_putchar(43);
	return(1);
	}
	else if (n<0)
	{
	_putchar(45);
	return(-1);
	}
	else
	{
	_putchar(48);
	return(0);
	}
}
