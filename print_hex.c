#include "main.h"
/**
 * print_hex - print oct number
 * @n: input num
 * @ch: digit start
 */
void print_hex(unsigned int n, int ch)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n / 16 ==  0)
	{
		if (n % 16 > 9)
		{
			_putchar((n % 16) + ch - 10);
		}
		else
		{
			_putchar((n % 16) + '0');
		}
	}
	else
	{
		print_hex(n / 16, ch);
		if (n % 16 > 9)
		{
			_putchar((n % 16) + ch - 10);
		}
		else
		{
			_putchar((n % 16) + '0');
		}


	}
}
/**
 * print_h_lower - print and retrun number of digits of bin numbers
 * @ls: arg list item
 *
 * Return: number of bin digits printed
 */
int print_h_lower(va_list ls)
{
	unsigned int n;

	n = va_arg(ls, unsigned int);
	print_hex(n, 'a');

	return (digits(16, n));
}
/**
 * print_h_upper - print and retrun number of digits of bin numbers
 * @ls: arg list item
 *
 * Return: number of bin digits printed
 */
int print_h_upper(va_list ls)
{
	unsigned int n;

	n = va_arg(ls, unsigned int);
	print_hex(n, 'A');

	return (digits(16, n));
}
