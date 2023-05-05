#include "main.h"
/**
 *numbers - processes numbers.
 * @n:input var
 * @c:input var
 * @f:input var
 * Return: an int.
 */
int numbers(long int n, long int c, int f)
{
	int i = 0;
	long int x = 1;

	while (i < c)
	{
		x = x * 10;
		i++;
	}
	i = 0;
	while (i < c)
	{
		_putchar(n / x + '0');
		n = n % x;
		x = x / 10;
		f++;
		i++;
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	return (f);
}
