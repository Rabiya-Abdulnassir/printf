#include "main.h"
/**
 * print_c - print char
 * @ls: va_list
 * Return: num char printed
 */
int print_c(va_list ls)
{
	int c = va_arg(ls, int);

	_putchar(c);
	return (1);
}

/**
 * print_s - print string
 * @ls: va_list
 * Return: num char printed
 */
int print_s(va_list ls)
{
	int i = -1;
	char *s = va_arg(ls, char *);

	if (s == NULL)
		return (write(STDOUT_FILENO, "(null)", 6));

	while (s[++i])
		_putchar(s[i]);
	return (i);
}
/**
 * print_u -print decimal
 * @n: number
 * Return: num char printed
 */
int print_u(unsigned int n)
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
 * print_uns - print int
 * @ls: args list
 * Return: num char printed
 */
int print_uns(va_list ls)
{
	int n = va_arg(ls, int);

	return (print_u(n));
}
