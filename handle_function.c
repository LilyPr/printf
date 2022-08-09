#include "main.h"

/**
 * handle_func - check which function will use
 * @spec -identifies the type of the variable to print
 *
 * Return: matching print function
 */
int (*handle_func(const char *spec))(va_list)
{
	int lx;

	type_t usertype[] = {
		{"c", print_chars},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_i},
		{"d", print_d},
		{"r", print_reve},
		{"u", print_u},
		{NULL, NULL}
	};
	for (lx = 0; usertype[lx].convertidf; lx++)
	{
		if (*spec == usertype[lx].convertidf[0])
			return (usertype[lx].print);
	}
	return (NULL);
}
