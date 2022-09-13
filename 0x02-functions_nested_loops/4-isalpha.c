#include <stdio.h>

/**
 * function that checks aplhabet character
 * return 1 if c is a lettwe lowercase or uppercase
 */
int _isalpha(int c)
{
	if (c >='a' && c<= 'z') || ( c >= 'A' && c <= 'Z')
	{
	   return (1);
	}
	else
	{
	   return (0);
	}
}
