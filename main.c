#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len, len2, len3;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string");
	printf("String:[%s]\n", "I am a string");
	len = _printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	printf("%d\n", len);
	len2 = _printf("Lets try to printf a simple sentence.\n");
	len3 = printf("Lets try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len2, len2);
	printf("Length:[%d, %i]\n", len3, len3);
	_printf("Negative: [%d]\n", -762534);
	printf("Negative: [%d]\n", -762534);
	_printf("%b\n", 98);
	_printf("Unsigned: [%u]\n", ui);
	printf("Unsigned: [%u]\n", ui);
	return (0);
}
