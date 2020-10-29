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
	return (i + k);
}

#include <string.h>
#include <stdio.h>
#include <string.h>


int		main()
{
	int buff = 0;
	char str1[7] = "sadads";
	char str2[5] = "sadd";
	char str3[7] = "sadads";
	char str4[5] = "sadd";

	printf("%d\n", ft_strlcat(str1, str2, buff));
	printf("%ld\n", strlcat(str3, str4, buff));

}
