#include "dict_parse.h"
#include "ft_split.h"
#include "entry_validation.h"
#include <stdio.h>



char  **parse(char *path)
{
	char *str;
	char **lines_array;
	int strlen;

	if(!(str = allocate_dict(path)))
		return(0);
	strlen = ft_strlen(str);
	if(!(lines_array = malloc(sizeof(char **) * strlen + 1)))
		return(0);
	lines_array = ft_split(str, '\n');
	free(str);
	return(lines_array);
}

t_entry	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	t_entry	*out;
	char** temp;

	if (!(out = malloc((ac + 1) * sizeof(t_entry))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		temp = ft_split(av[i], ':');
		if(temp[1] && entry_validation(temp))
		{
			out[i].key = temp[KEY];
			out[i].value = temp[VALUE];
			out[i].key_len = ft_strlen(temp[KEY]);
			out[i].val_len = ft_strlen(temp[VALUE]);
		}
		else
		{
			out[i].key = malloc(sizeof(char) * 5);
			out[i].value = malloc(sizeof(char) * 5);
			out[i].key = "void";
			out[i].value = "void";
		}
		i++;
	}
	out[i] = (t_entry){0, 0, 0, 0};
	return (out);
}

char* lookup (t_entry *dict, char *input)
{
	int i = 0;
	t_entry *count;

	count = dict;
	while (*count++->key)
	{
		if(ft_strcmp(dict[i].key, input) == 0)
			return (dict[i].value);
		else
			return ("error");
		i++;
	}
	return (0);
}

t_entry* parse_manager(char *path)
{
	int dict_len;
	t_entry* out;
	char **array;

	if(!(array = parse(path)))
			return(0);
	dict_len = nb_strs(array);
	out = ft_strs_to_tab(dict_len,array);
	//debug_print_dict(out, dict_len);
	return (out);
}


void debug_print_dict(t_entry *dict, int len)
{
	int i = 0;
	while(i < len)
	{
		ft_putstr(dict[i].key);
		ft_putstr(" ");
		ft_putstr(dict[i].value);
		printf(" %d %d\n", dict[i].key_len, dict[i].val_len);
		i++;
	}
}
