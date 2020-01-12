/*
** Function that checks if 'c' is an alphanumeric (alphabetical or number) character
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
