#include <unistd.h>

void	print_string(char *str)
{
	while(*str)
		write(1, str++, 1);
}