#include <string.h>
#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);


int		main()
{
	char str1[] = "asfasfff";
	char str2[] = "asfsaf";
	printf("%d\n",strncmp(str1, str2, 2));
	printf("%d\n",ft_strncmp(str1, str2, 2));

}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 1;
	while(*s1 && i < n && (*s1 == *s2))
    {
		s1++;
		s2++;
		i++;
    }
    return *s1 - *s2;
}
