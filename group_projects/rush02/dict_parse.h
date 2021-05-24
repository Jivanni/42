#ifndef DICT_PARS_H
# define DICT_PARS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>

typedef struct s_entry
{
	char *key;
	char *value;
	int key_len;
	int val_len;
}	t_entry;
# define KEY 0
# define VALUE 1

# include "str_utilities.h"
# include "file_io.h"
# include "trim.h"
# include "ft_split.h"

char	**parse(char *path);
char* lookup (t_entry *dict, char *input);
t_entry* parse_manager(char *path);
void debug_print_dict(t_entry *dict, int len);
#endif
