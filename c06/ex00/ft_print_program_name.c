#include <unistd.h>

int main(int argc, char *argv[])
{
	char *ptr;

	(void)argc;
	ptr = argv[0];
	while(*ptr)
		{
			write(1,ptr++,1);
		}
	write(1,"\n",1);
}
