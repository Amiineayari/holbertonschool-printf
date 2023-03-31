#include "main.h"
/**
 *_printf -prints characters and strings.
 *@format:input var
 *Return:an integer.
 */
int _printf(const char *format, ...)
{
	va_list liste;
	int l = 0;

	va_start(liste, format);
	if (format == NULL)
	{
		return (-1);
	}
	else
	{
		l = normal_process(format, 0, liste);
	}
	va_end(liste);
	return (l);
}
