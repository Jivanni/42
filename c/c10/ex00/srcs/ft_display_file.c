#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int put_file(char *path)
{
	int data_stream;
	int bytes;
	char data[1];

	data_stream = open(path, O_RDONLY);
	while((bytes = read(data_stream,data,1)))
		{
			if (bytes == -1)
				return(0);
			write(1,&data[0],1);
		}
	close(data_stream);
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (!(put_file(argv[1])))
		ft_putstr("Cannot read file.\n");
}
