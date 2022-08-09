#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: format specifier
 *
 * Return: The number of characters printed
 */
int (*handle_spec(const char *format))(va_list)
{
	unsigned int i;

	myprint_t k[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{NULL, NULL}
	};
	for (i = 0; k[i].t != NULL; i++)
	{
		if (*(k[i].t) == *format)
		{
			break;
		}
	}
	return (k[i].f);
}
/**
 * _printf - prints anything
 * @format: list of argument
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, num = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
	va_start(valist, format);
	
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			num++;
		}
		if (!format[i])
			return (num);
		f = handle_spec(&format[i + 1]);
		if (f != NULL)
		{
			num += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		num++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (num);
}
