#include "main.h"

/**
 * print_string - print a string
 * @args: va_list containing the string 
 *
 * Return: number of string
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;
	int rVal;
	
	if (!str)
		str = "(null)";
	while (*str)
	{
		rVal = _putchar(*str);
	}
		if (rVal == -1)
		{
			return (-1);
			count++;
			str++;
		}
		return (count);
}
