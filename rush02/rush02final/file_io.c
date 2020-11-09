/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_io.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llembo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:22:54 by llembo            #+#    #+#             */
/*   Updated: 2020/11/08 20:24:45 by llembo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_io.h"
#include "str_utilities.h"

char	*allocate_dict(char *path)
{
	int				file_descriptor;
	unsigned int	byte_read;
	char			*buffer;

	if (!(buffer = (char*)malloc(sizeof(char) * BUFFER_SIZE)))
		return (0);
	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor < 0)
		return (0);
	while ((byte_read = read(file_descriptor, buffer, BUFFER_SIZE)) > 0)
	{
		if (byte_read == (unsigned int)-1)
			return (0);
	}
	close(file_descriptor);
	return (buffer);
}
