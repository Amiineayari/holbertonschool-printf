#include "main.h"
/**
 *printing_number -prints characters and strings.
 *@liste:input var
 *Return:an integer.
 */
long int printing_number(va_list liste)
{
	long int n, c = 0, f = 0, k;

	n = va_arg(liste, int);
	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
		f++;
	}
	k = n;
	while (k >= 10)
	{
		k = k / 10;
		c++;
	}
	f = numbers(n, c, f) + 1;
	return (f);
}
