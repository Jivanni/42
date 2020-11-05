#include <stdlib.h>
char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[k])
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	return (dest);
}

int		ft_strlen(char *str)
{
	int unsigned len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *out;
	size_t len;
	int i;

	len = 0;
	i = 0;
	while(i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	out = (char*) malloc(sizeof(char) * len + sizeof(char));
	i = 0;
	while (i < size)
	{
		ft_strcat(out, strs[i]);
		ft_strcat(out, sep);
		i++;
	}
	out[size] = '\0';
	return(out);
}

#include <stdio.h>
int main()
{
	char **strs;
	char str1[] = {'h','e','l','\0'};
	char str2[] = {'l','o','u','\0'};
	strs[0] = str1;
	strs[1] = str2;
	char *sep = ",";
	printf("%s", ft_strjoin(2, strs, sep));
}
