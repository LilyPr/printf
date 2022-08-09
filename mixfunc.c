#include "main.h"

/**
 * print_number - print serious numbers
 * @k: that's the number
 *
 * Return: numbers
 */
int  print_number(unsigned int k)
{
	int rval;
	unsigned int num = k;

	if (num / 10)
	{
		print_number(num / 10);
		rval = _putchar('0' + num % 10);
	}
	if (rval == -1)
	{
		return (rval);
	}
	return (rval);
}
/**
 * countdgt - count how many digits
 * @num: the number
 *
 * Return: count numbers
 */
int countdgt(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}
/**
 * _strlen - count the number of characters
 * @str: pointer to a string
 *
 * Return: number of characters
 */
int _strlen(char *str)
{
	int count = 0;

	while (*(str + count))
	count++;
	return (count);
}
