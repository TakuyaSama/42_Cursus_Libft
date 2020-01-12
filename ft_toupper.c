/*
** This function checks if the 'c' is a lowercase alphabetical character and if that's the case, then it converts it to uppercase, otherwise, it leaves unchanged
For further information, please check the standard C library function 'toupper(int c)'
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
