#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - write output to stdou
 * @format: character string with format specifier
 *
 * Returns: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int (*fn)(va_list) = NULL;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			fn = handle_func(format);
			if (*(format) == '\0')
				return (-1);
			else if (fn == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				count += 2;
			}
			else
				count += fn(args);
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			count++;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
