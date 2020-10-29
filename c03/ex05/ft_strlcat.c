unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	k = 0;
	while(dest[i])
	{
		i++;
	}
	while(src[k] && k < (size - 1))
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (i);
}

#include <string.h>
#include <stdio.h>
#include <string.h>


int		main()
{
	int buff = 2;
	char str1[] = "sadads";
	char str2[] = "sadd";
	char str3[] = "sadads";
	char str4[] = "sadd";

	printf("ft %d - %s\n", ft_strlcat(str1, str2, buff), str1);
	printf("bi %ld - %s\n", strlcat(str3, str4, buff), str3);



}
