#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_chars - print character
 * @arg: - numbers of arguments
 *
 * Return: Character
 */
int print_chars(va_list args)
{
	int chars;

	chars = va_arg(args, int);
	return (_putchar(chars));
}
/**
 * print_string - print string
 * @args: - numbers of string arguments
 *
 * Return: string
 */
int print_string(va_list args)
{
	int k, num = 0;
	char *str;

	k = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
		num++;
	}
	return (num);
}
/**
 * print_percent - print percent of number
 * @@args: string  argument
 *
 * Return: return the percent
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
/**
 * print_d - prints a decimal integer
 * @args: decimal argument
 *
 * Return: numbers
 */
int print_d(va_list args)
{
	unsigned int absolute, numcount, count;
	int j;

	count = 0;
	j = va_arg(args, int);
	if (j < 0)
	{
		absolute = (j * -1);
		count += _putchar('-');
	}
	else
		absolute = j;
	numcount = 1;
	while (numcount >= 1)
	{
		count += _putchar(((absolute / numcount) % 10) + '0');
		numcount /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @args: integer argument
 *
 * Return: the numbers
 */
int print_i(va_list args)
{
	return (print_d(args));
}
