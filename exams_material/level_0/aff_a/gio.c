#include <unistd.h>

int		main(int ac, char **av)
{

	char *pt;
	pt = av[1];
	if (ac != 2)
		write(1, "a\n", 2);
	else
	{
		while(pt++)
		{
			if(*pt == 'a')
				{
				write(1, "a", 1);
				break;
				}
		}
		write(1, "\n", 1);
	}
	return (0);
}
