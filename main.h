#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

/**
 * struct specformat - struct specifier format
 * @valid: the valid character.
 * @f: the functions associated.
 */
typedef struct specformat
{
	char *valid;
	int (*f)(va_list);
} own;
int _printf(const char *format, ...);
int print_chars(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int (*spec_handle(char y))(va_list args);
int _putchar(char c);

#endif
