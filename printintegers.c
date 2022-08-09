#include "main.h"
#include <stdio.h>

/**
 * print_d - prints decimal numbers
 * @args: list of arguments
 *
 * Return: count
 */
int print_d(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int rval;
	unsigned int unsign;

	if (num < 0)
	{
		rval = _putchar('-');
		if (rval == -1)
		{
			return (-1);
		}
		count += 1;
		unsign = -num;
	}
	else if (num == 0)
	{
		rval = _putchar('0');
	}
	if (rval == 1)
	{
		return (1);
	}
	else
	{
		return (-1);
		unsign = num;
	}
	rval = print_number(unsign);
	if (rval == 1)
	{
		count += countdgt(unsign);
	}
	else
	{
		count = -1;
	}
	return (count);
}
