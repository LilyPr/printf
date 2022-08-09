#include "main.h"

/**
 * print_chars - print characters
 * @args: va_list containing the chars
 *
 * Return: numbers of printed
 */
int print_chars(va_list args)
{
	char ch = va_arg(args, int);
	int count = 0, rval;

	rval = _putchar(ch);
	if (rval == -1)
		return (-1);
	count++;
	return (count);
}
