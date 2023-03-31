#include "main.h"
/**
 *normal_process - the first process function.
 *@format: the format string.
 *@l: the length variable.
 *@liste: the list of arguments.
 *Return: an int.
 */
int normal_process(const char *format, int l, va_list liste)
{
	int n, i;

	n = strlen(format);
	for (i = 0; i < n; i++)
	{
		if (*(format + i) != '%')
		{
			_putchar(*(format + i));
			l++;
		}
		else if (*(format + i) == '%')
		{
			if (*(format + i + 1) == 's' || *(format + i + 1) == 'c' ||
			 *(format + i + 1) == '%' || *(format + i + 1) == '\0')
			{
				l = l + process_function(liste, format, i, 0);
				i = i + 1;
			}

			else if (*(format + i + 1) == 'd' || *(format + i + 1) == 'i')
			{
				l = l + printing_number(liste);
				i = i + 1;
			}
			else
			{
				_putchar(*(format + i));
				l++;
			}
		}
	}
	return (l);
}
