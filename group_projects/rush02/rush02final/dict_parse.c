/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:05:26 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/08 20:05:27 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict_parse.h"

char		**parse(char *path)
{
	char	*str;
	char	**lines_array;
	int		strlen;

	if (!(str = allocate_dict(path)))
		return (0);
	strlen = ft_strlen(str);
	if (!(lines_array = malloc(sizeof(char **) * strlen + 1)))
		return (0);
	lines_array = ft_split(str, '\n');
	free(str);
	return (lines_array);
}

t_entry		*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_entry		*out;
	char		**temp;

	if (!(out = malloc((ac + 1) * sizeof(t_entry))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		temp = ft_split(av[i], ':');
		if (temp[1] && entry_validation(temp))
		{
			out[i].key = temp[KEY];
			out[i].value = temp[VALUE];
			out[i].key_len = ft_strlen(temp[KEY]);
			out[i].val_len = ft_strlen(temp[VALUE]);
		}
		i++;
	}
	out[i] = (t_entry){0, 0, 0, 0};
	return (out);
}

char		*lookup(t_entry *dict, char *input)
{
	int		i;
	t_entry	*count;

	i = 0;
	count = dict;
	while (*count->key)
	{
		if (ft_strcmp(dict[i].key, input) == 0)
			return (dict[i].value);
		i++;
		count++;
	}
	return (ERROR);
}

t_entry		*parse_manager(char *path)
{
	int		dict_len;
	t_entry	*out;
	char	**array;

	if (!(array = parse(path)))
		return (0);
	dict_len = nb_strs(array);
	out = ft_strs_to_tab(dict_len, array);
	return (out);
}
