#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct usertype - give privelege to conversion specifiers to print function
 * @convertidf: the conversion specifier
 * @print: print functions
 */
typedef struct usertype
{
	char *convertidf;
	int (*print)(va_list);
} usertype_t;
int _printf(const char *format, ...);
int print_chars(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int (*handle_func(const char *spec))(va_list);
int _putchar(char c);

#endif
