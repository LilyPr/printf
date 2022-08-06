#include "main.h"

/**
 * _write - writes the character c to stdout
 * @c: The output character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _write_ch(char c)
{
	return (write(1, &c, 1));
}
