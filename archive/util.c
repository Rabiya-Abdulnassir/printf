#include "main.h"
/**
* print_o -print hex
* @n: number
* Return: num char printed
*/
int print_o(unsigned int n)
{
	int i = 0;

	if (n < 8)
	{
		_putchar(n + '0');
		return (1);
	}
	else
	{
		i = print_o(n / 8);
		_putchar((n % 8) + '0');
		return (i + 1);
	}
}
/**
 * print_oct - print hex
 * @ls: args list
 * Return: num char printed
 */
int print_oct(va_list ls)
{
	unsigned int n = va_arg(ls, unsigned int);

	return (print_o(n));
}
/**
* print_h -print hex
* @n: number
* @a: upper or lower
* Return: num char printed
*/
int print_h(unsigned int n, int a)
{
	int i = 0;

	if (n < 16)
	{
		if (n < 10)
			_putchar(n + '0');
		else
			_putchar((n - 10) + a);
		return (2);
	}
	else
	{
		i = print_h(n / 16, a);
		if (n % 16 < 10)
			_putchar((n % 16) + '0');
		else
			_putchar((n % 16) - 10 + a);
		return (i + 2);
	}
}
/**
 * print_hex - print hex
 * @ls: args list
 * Return: num char printed
 */
int print_hex(va_list ls)
{
	unsigned int n = va_arg(ls, unsigned int);

	_putchar('0');
	_putchar('x');
	return (2 + print_h(n, 97));
}
