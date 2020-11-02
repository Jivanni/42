/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:34:30 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/02 15:34:37 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dst;
	char			*start;
	unsigned int	len;
	unsigned int	left;

	dst = dest;
	start = src;
	left = size;
	while (left-- != 0 && *dst)
		dst++;
	len = dst - dest;
	left = size - len;
	if (left == 0)
		return (len + sizeof(src));
	while (*src)
	{
		if (left > 1)
		{
			*dst++ = *src;
			left--;
		}
		src++;
	}
	*dst = '\0';
	return (len + (src - start));
}
