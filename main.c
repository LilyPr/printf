#include <stdio.h>
#include "main.h"

/**
 * main -entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'C';
	char str[] = "Hello Everyone";
	int x = 40, y = 80;

	printf("%c\n", ch);
	printf("%s\n", str);
	printf("%%\n", x);
	printf("%%\n", y);
	printf("%d\n", x);
	printf("%i\n", y);
	return (0);
}
