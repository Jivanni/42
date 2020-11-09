#ifndef FILE_IO_H
# define FILE_IO_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFFER_SIZE 1048576

char	*allocate_dict(char *path);
#endif
