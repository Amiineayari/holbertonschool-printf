#include "main.h"
/**
 *process_function - the whole processing of strings
 *@list: the list of arguments
 *@format: the format given as input
 *@i: counter
 *@f: the length adder
 *Return: returns the value
 */
int process_function(va_list list, const char *format, int i, int f)
{
	if (format[i + 1] == 'c')
	{
		print_char(list);
		f++;
	}
	else if (format[i + 1] == '\0')
	{
		f--;
	}
	else if (format[i + 1] == '%')
	{
		_putchar('%');
		f++;
	}
	else if (*(format + i + 1) == 's')
	{
		f = f + print_string(list);
	}
	else
	{
		_putchar(*(format + i));
		_putchar(*(format + i + 1));
		f = f + 2;
	}
	return (f);
}
