#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}


int main(int argc, char **argv)
{
	if (argc != 4)
		return (0);

}
