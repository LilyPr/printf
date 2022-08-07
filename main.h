#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

struct convert
{
	char *str;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_ch(va_list list);
int prnt_s(va_list list);
int prnt_perc(__attribut__((unused))va_list list);
int prnt_integer(va_list list);

#endif
