#include "main.h"
/**
 *print_char - the function to print a char
 *@p: the list of arguments
 */
void print_char(va_list p)
{
	char c;

	c = va_arg(p, int);
	_putchar(c);
}
