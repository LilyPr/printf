#include <stdio.h>
#include "main.h"

/**
 * main - Entry print all
 *
 * Return: Always 0
 */
int main(void)
{
	int m1 = 10;
	int m2 = 26;
	char ch = 'B';
	char a[] = "Hi there"

	_printf("%c\n", ch);
	printf("My name start with %c\n", ch);
	printf("%s\n", a);
	printf("%%\n", m2);
	_printf("%d\n", m1);
	_printf("%i\n", m2);
	return (0);
}
