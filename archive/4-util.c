#include "main.h"
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
/**
 * print_b - print binary
 * @n: num to print
 * Return: num char printed
 */
int print_b(unsigned int n)
{
	int i  = 0;

	if ((n / 2) == 0)
	{
		_putchar((n % 2) + '0');
		return (1);
	}
	else
	{
		i = print_b(n / 2);
		_putchar((n % 2) + '0');
		return (i  + 1);
	}
}
/**
 * print_bin - print binary
 * @ls: args list
 * Return: num char printed
 */
int print_bin(va_list ls)
{
	unsigned int n = va_arg(ls, unsigned int);

	return (print_b(n));
}

















