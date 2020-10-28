/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 19:33:59 by gcusuman          #+#    #+#             */
/*   Updated: 2020/10/27 19:36:03 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len;

	len = 0;
	while (*src)
	{
		if (len < size - 1)
			*dest++ = *src;
		src++;
		len++;
	}
	*dest = '\0';
	return (len);
}
