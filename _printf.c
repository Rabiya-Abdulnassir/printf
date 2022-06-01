#include "main.h"
/**
 * print_hex_cap -print hex in cap
 * @ls: args list
 * Return: num char printed
 */
int print_hex_cap(va_list ls)
{
	  unsigned int n = va_arg(ls, unsigned int);

	 return (print_h(n, 65));
}
/**
 * print_percent - print percent
 * @ls: args list
 * Return: num char printed
 */
int print_percent(va_list __attribute__((unused))ls)
{
	_putchar('%');
	return (1);
}
/**
 * get_func - get printer func
 * @c: select char
 * Return: function pointer
 */
int (*get_func(char c))(va_list ls)
{
	switch (c)
	{
		case 's':
			return (print_s);
		case 'd':
			return (print_int);
		case 'i':
			return (print_int);
		case 'x':
			return (print_hex);
		case 'X':
			return (print_hex_cap);
		case '%':
			return (print_percent);
		case 'u':
			return (print_uns);
		case 'c':
			return (print_c);
		case 'p':
			return (print_ptr);
		case 'o':
			return (print_oct);
		default:
			return (NULL);
	}
}
/**
 * _printf - modified printf
 * @fmt: format string
 * Return: num char printed
 */
int _printf(char *fmt, ...)
{

	va_list  args;
	int i =  0;
	int len = 0;

	va_start(args, fmt);
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			if (!(get_func(fmt[i + 1])))
			{
				_putchar('%');
				_putchar(fmt[i + 1]);
				len += 2;
				i++;
			}
			else
			{
				len += get_func(fmt[i + 1])(args);
				i++;
			}
		}
		else
		{
			_putchar(fmt[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
