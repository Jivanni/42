

#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	k = 0;
	while(dest[i])
	{
		i++;
	}
	while(src[k])
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main()
{
	char str1[] = "abcd";
	char str2[] = "efg";
	printf("%s\n",ft_strcat(str1, str2));
	printf("%s\n",str1);
	printf("%s\n",str2);

}
