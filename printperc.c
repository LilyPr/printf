#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_perc - pass the percent
 * @perc: list of percent arguments
 *
 * Return: return the percent
 */
int print_perc(va_list perc)
{
	char *str;

	str = "%";
	if (va_arg(perc, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
