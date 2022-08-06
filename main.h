#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int _write_ch(char c);
int displ_chars(va_list list);
int show_str(va_list list);
int show_perc(__attribut__((unused))va_list list);
int show_integers(va_list list);

#endif
