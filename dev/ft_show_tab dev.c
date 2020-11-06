#include "ft_stock_str.h"
#include "stdio.h"
#include "stdlib.h"

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*out;
	int		len;

	len = ft_strlen(src);
	if (!(out = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*src)
	{
		*out++ = *src++;
	}
	*out = '\0';
	return (out - len);
}


struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *out;
	if (!(out = malloc((ac + 1) * sizeof(struct s_stock_str))))
		return(NULL);
	i = 0;

	while(i < ac)
	{
		out[i].size = ft_strlen(av[i]);
		out[i].str = av[i];
		out[i].copy = ft_strdup(av[i]);
		i++;
	}
	out[i] = (struct s_stock_str){0, 0, 0};
	return(out);
}

//del

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_put_number(int number)
{
	if (number > 9)
		ft_put_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

void ft_show_tab(struct s_stock_str *par)
{
	while(par -> str)
	{
		ft_putstr(par -> str);
		ft_put_number(par -> size);
		write(1, "\n", 1);
		ft_putstr(par -> copy);
		par++;
	}
}


int main(){
    char **strings = (char**)malloc(5*sizeof(char*));
    int i = 0;
    for(i = 0; i < 5; i++)
        strings[i] = (char*)malloc(50*sizeof(char));
    strings[0] = "bird goes tweet";
    strings[1] = "mouse goes squeak";
    strings[2] = "cow goes moo";
    strings[3] = "frog goes croak";
    strings[4] = "what does the fox say?";
	ft_show_tab(ft_strs_to_tab(5,strings));
    return 0;
}
