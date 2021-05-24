//debug!!
#include <stdio.h>
//debug

#include "str_utilities.h"
#include "number_pars.h"
#include "dict_parse.h"
#include "file_io.h"
#define ERROR "Dict Error\n"
#define KEY 0
#define VALUE 1

int main(int argc, char **argv)
{
	char *base_dict;
	t_entry*  dict;

	base_dict = "numbers.dict";

	if (argc == 1)
		ft_putstr(ERROR);
	else if (argc == 2)
	{
		if(!(dict = parse_manager(base_dict)))
			ft_putstr(ERROR);
		n_parse(argv[1], dict);
	}
	else if (argc == 3)
	{
		base_dict = argv[1];
		if(!(dict = parse_manager(base_dict)))
			ft_putstr(ERROR);
		ft_putstr(lookup (dict, argv[2]));
		ft_putstr("2 agruments");
	}
	else
		ft_putstr("too many agruments");
}
