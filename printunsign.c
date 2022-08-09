#include "main.h"

/**
 * print_u - prints unsigned int
 * @args: the args list
 *
 * Return: chars printed
 */
int print_u(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int dgt = num;
	int count = 0;
	int rval;

	if (num < 1)
	{
		_putchar('0');
		return (1);
	}
	rval = print_number(num);
	if (rval == 1)
	{
		count += countdgt(dgt);
	}
	else
	{
		count = -1;
	}
	return (count);
}
