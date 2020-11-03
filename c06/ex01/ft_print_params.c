#include <unistd.h>

int main(int argc, char *argv[])
{
	char *ptr;
	int i;

	i = 1;
	if (argc > 1)
		{
			while (i < argc)
			{
				ptr = argv[i++];
				while(*ptr)
					write(1,ptr++,1);
				write(1,"\n",1);
			}
		}
}
