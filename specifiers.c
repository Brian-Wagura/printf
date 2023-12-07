#include "main.h"

/**
 * print_binry - Prints an unsigned integer in binary
 * @n: unsigned int
 *
 * Return:count
 */

int print_binry(unsigned int n)
{
	int count = 0;

	if (n > 1)
	{
		count += print_binry(n / 2);
	}
	count += print_chr('0' + n % 2);
	return (count);
}

/**
 * print_unsgnd - Handles unsigned integer in a certain base
 * @n: unsigned int
 * @base: Base of a number
 *
 * Return: count
 */
int print_unsgnd(unsigned int n, int base)
{
	int count;

	count = 0;
	if (n < (unsigned int)base)
	{
		print_chr('0' + n);
		count++;
	}
	else
	{
		count += print_unsgnd(n / base, base);
		print_chr('0' + n % base);
		count++;
	}
	return (count);
}
