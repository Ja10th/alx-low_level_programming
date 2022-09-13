#include <stdio.h>

/**
 * prints the sign of a number
 * return 1 and print + if n is greater than 1
 * return 0 and print 0 if n is equal to 0
 * return -1  and print - if n is less than 1
 */
int print_sign(int n)
{
	if (n >= 1)
	{
	    _putchar('+');
	    return (1);
	}
	else if (n == 0)
	{
	   _putchar('0');
	   return (0);
	}
	else
	{
	   _putchar('-');
	   return (-1);
	}
}
