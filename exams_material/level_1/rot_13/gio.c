#include <unistd.h>

int		main()
{
	char *str = "z";
	for (int i = 0; i< 1; i++)
	{
		str[i] = (str[i] % 122) + 13 + 96;
		write(1,&str[i],1);
	}
}

char a = 'z'