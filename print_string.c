#include "main.h"
/**
 *print_string - the function to print a whole string
 *@p: the list of arguments of printf
 *Return: returns the length of the printed string
 */
int print_string(va_list p)
{
	char *s;
	int ls, j, i = 0;

	s = va_arg(p, char *);
	if (s == NULL)
	{

		s = "(null)";
		ls = strlen(s);
		for (j = 1; j <= ls; j++)
		{
			_putchar(*s);
			s++;
			i++;
		}
	}
	else
	{
		ls = strlen(s);
		for (j = 1; j <= ls; j++)
		{
			_putchar(*s);
			s++;
			i++;
		}
	}
return (i);
}
