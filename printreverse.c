#include "main.h"

/**
 * print_rev - print in reverse
 * @args: va_list with the string
 *
 * Return: void
 */
int print_reve(va_list args)
{
	int length, count = 0;
	char *string = va_arg(args, char *);
	
	length = _strlen(string) - 1;
	while (length >= 0)
	{
		_putchar(*(string + length));
		length--;
		count++;
	}
	return (count);
}
