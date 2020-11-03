#include <unistd.h>

int main(int argc, char *argv[])
{
	char *ptr;
	int i;

	i = argc - 1;
	if (argc > 1)
		{
			while (i > 0)
			{
				ptr = argv[i];
				while(*ptr)
					write(1,ptr++,1);
				write(1,"\n",1);
				i--;
			}
		}
}
