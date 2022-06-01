#include "main.h"
/**
* _putchar - print char
* @c: printed char
*/
void _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
