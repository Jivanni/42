
#include "entry_validation.h"
#include "trim.h"

int		ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 127))
			return (0);
		str++;
	}
	return (1);
}


int entry_validation(char **str)
{
	str[KEY] = trim(str[KEY]);  //remove lftrim key
	str[VALUE] = trim(str[VALUE]);
	return (ft_str_is_numeric(str[KEY]) && ft_str_is_printable(str[VALUE]));

}


