#include <unistd.h>

//check matrix
int check_str(char *str)
{
	return (str[0] == '\0');
}

int check_if_first(int curr, int argc, char **argv)
{
	int i;
	int index;

	i = 1;
	index = 0;
	while (i < argc)
	{
		while (i != curr && !check_str(argv[curr]))
		{
			if (argv[curr][index] == argv[i][index])
				index ++;
			else
				return (argv[curr][index] > argv[i][index]);
		}
		index = 0;
		i++;
		i = i % argc;
	}
	return (0);
}
//mark str[0] with '\0'
void mark_str(char *str)
{
	str[0] = '\0';
}
// check if string has been printed

void ft_pustr(char *ptr)
{
	char *start;
	start = ptr;
	while(*ptr)
		write(1,ptr++,1);
	write(1,"\n",1);
	mark_str(start);
}

int main(int argc, char *argv[])
{
	char *ptr;
	int i;
	int printed;

	printed = 1;
	i = 1;
	if (argc > 1)
		{
			while (printed < argc)
			{
				ptr = argv[i];
				if(!check_str(ptr) && check_if_first(i,argc,argv))
					ft_pustr(ptr);
					printed++;
				i++;
				i = i % argc;
			}
		}
}
