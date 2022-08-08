#include "main.h"

/**
 * spec_handle - find for format specifier
 * @y - variable to the function
 *
 * Return: function of specifier
 */
int (*spec_handle(char y))(va_list)
{
	int k = 0;

	own arr[] = {
		{"c", print_chars},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	while (arr[k].valid)
	{
		if (y == arr[k].valid[0])
			return (arr[k].f);
		k++;
	}
	return (NULL);
}
