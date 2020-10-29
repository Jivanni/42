
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	k = 0;
	while(dest[i])
	{
		i++;
	}
	while(src[k] && k < nb)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>
#include <string.h>


int		main()
{
	char str1[] = "";
	char str2[] = "y";

	printf("%s\n", ft_strncat(str1, str2, 3));
	//printf("%s\n", strncat(str3, str4, 2));

}
