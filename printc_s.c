#include "main.h"
#include <stddef.h>

/**
 * print_c - prints a char
 * @c: char to print
 *
 *  Return: always 1
 */
int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: number of characters
 */

int print_s(va_list s)
{
	int num;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (num = 0; str[num]; num++)
	{
		_putchar(str[num]);
	}
	return (num);
}
