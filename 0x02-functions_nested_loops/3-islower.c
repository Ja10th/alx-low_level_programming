#include <stdio.h>

/**
 * _islower - checks for lowercase character
 * return 1 if c is lowercase
 */
int _islower(int c)
{
      if (c >= 'a' && c<= 'z')
	{
	    return (1);
	}
      else
      {
            return (0);
      }
}
