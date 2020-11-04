#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void ft_putstr(char *ptr)
{
	while(*ptr)
		write(1,ptr++,1);
	write(1,"\n",1);
}

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc > 1)
		{
			i = 1;
			while (i < argc)
			{
				j = i+1;
				while(j < argc)
				{
					if (ft_strcmp(argv[i], argv[j]) > 0)
					{
						char* temp = argv[i];
						argv[i] = argv[j];
						argv[j] = temp;
					}
					j++;
				}
				ft_putstr(argv[i]);
				i++;
			}
		}
}
