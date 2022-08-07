#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: Is a character string
 *
 * Return: The number of characters printed 
 */
int _printf(const char *format, ...)
{
	int n;
	int size = 100;
	char *p, *np;
	va_list ap;

	if ((p = malloc(size)) == NULL)
		return NULL;
	while (1) {
		va_start(ap, fmt);
		n = vsnprintf(p, size, fmt, ap);
		va_end(ap);

		if (n < 0)
			return NULL;
		if (n < size)
			return p;
		size = n + 1;
		if ((np = realloc (p, size)) == NULL) {
			free(p);
			return NULL;
		} else {
			p = np;
		}
	}
}
