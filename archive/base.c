#include "main.h"
/**
 * digits -return number of digits
 * @n: number input
 * @base: base
 *
 * Return: number of bin digits
 */
int digits(int base, unsigned int n)
{
	int count;

	count = 1;
	if (n == 0)
		return (1);
	while (n / base != 0)
	{
		count++;
		n = n / base;
	}
	return (count);
}
/**
 * print_unsigned -print unsigned decimal
 * @n: number printed
 *
 * Description: print unsigned decimal
 */
void print_unsigned(unsigned int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n / 10 ==  0)
		_putchar((n % 10) + '0');
	else
	{
		print_unsigned(n / 10);
		_putchar((n % 10) + '0');
	}
}

/**
 * print_u - print and retrun number of digits of bin numbers
 * @ls: arg list item
 *
 * Return: number of bin digits printed
 */
int print_u(const va_list ls)
{
	unsigned int n;

	n = va_arg(ls, unsigned int);
	print_unsigned(n);

	return (digits(10, n));
}
