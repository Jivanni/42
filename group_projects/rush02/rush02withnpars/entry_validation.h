#ifndef ENTRY_VALIDATION_H
# define ENTRY_VALIDATION_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>
# define KEY 0
# define VALUE 1


# include "str_utilities.h"
# include "file_io.h"
# include "trim.h"
# include "ft_split.h"


int entry_validation(char **str);

#endif
