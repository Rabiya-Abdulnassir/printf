#include "main.h"
/**
 * print_d -print decimal
 * @n: number
 * Return: num char printed
 */
int print_d(int n)
{
	int i = 0;

	if (n < 9)
	{
		_putchar(n + '0');
		return (1);
	}
	else
	{
		i = print_d(n / 10);
		_putchar((n % 10) + '0');
		return (i + 1);
	}
}
/**
 * print_int - print int
 * @ls: args list
 * Return: num char printed
 */
int print_int(va_list ls)
{
	int n = va_arg(ls, int);
	int num, i = 0;

	num = n;
	if (num < 0)
	{
		_putchar('-');
		i = print_d((-1) * (num / 10));
		_putchar(((-1) * (num % 10)) + '0');
		return (2 + i);
	}
	return (print_d(num));
}
/**
* print_p -print hex
* @n: number
* Return: num char printed
*/
int print_p(unsigned long int n)
{
	int i = 0;

	if (n < 16)
	{
		if (n < 10)
			_putchar(n + '0');
		else
			_putchar((n - 10) + 'a');
		return (2);
	}
	else
	{
		i = print_p(n / 16);
		if (n % 16 < 10)
			_putchar((n % 16) + '0');
		else
			_putchar((n % 16) - 10 + 'a');
		return (i + 2);
	}
}
/**
 * print_ptr - print hex
 * @ls: args list
 * Return: num char printed
 */
int print_ptr(va_list ls)
{
	unsigned long int n = va_arg(ls, unsigned long int);

	_putchar('0');
	_putchar('x');
	return (2 + print_p(n));
}
