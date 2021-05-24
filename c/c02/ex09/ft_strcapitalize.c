/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 19:09:44 by gcusuman          #+#    #+#             */
/*   Updated: 2020/10/28 15:23:38 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_charupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	return (str);
}

char	*ft_charlowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str += 32;
	return (str);
}

int		char_notalphan(char *str)
{
	return (!((*str >= 'A' && *str <= 'Z') \
	|| (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9')));
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || char_notalphan(&str[i - 1]))
			str[i] = *ft_charupcase(&str[i]);
		else
			str[i] = *ft_charlowcase(&str[i]);
		i++;
	}
	return (str);
}
