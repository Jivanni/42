#include <unistd.h>

//check matrix
int sort_str(int curr, int argc, char **argv)
{
	char first_ch;
	first_ch = argv[curr][0];
	int i;
	i = 1;
	char temp;
	temp = 32;
	while (i < argc)
	{
		if (i != curr)
		{
			argv[curr][i]
		}
		i++;
	}

}
//mark str[0] with '\0'
void mark_str(char *str)
{

}
// check if string has been printed
void check_str(char *str)
{

}

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
