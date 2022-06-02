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
