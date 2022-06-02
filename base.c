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
