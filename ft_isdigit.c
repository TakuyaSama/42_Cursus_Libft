/*
** Function that checks if 'c' is a digit (0 through 9)
For further information, please check isdigit() function from standard C library
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
