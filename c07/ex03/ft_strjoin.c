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
	int len;
	int i;

	len = 0;
	i = 0;
	if(size == 0)
	{
		if(!(out = (char*) malloc(sizeof(char))))
			return (NULL);
		return(out);
	}
	while(i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	if(!(out = (char*) malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(out, strs[i]);
		if(i < size - 1)
		    ft_strcat(out, sep);
		i++;
	}
	out[len] = '\0';
	return (out);
}

#include <stdio.h>
int main()
{
	char **strs = NULL;
	strs[0] = "hello";
	strs[1] = "asdad";
	strs[2] = "y434";
	char *sep = ", ";
	printf("%s", ft_strjoin(3, strs, sep));
}
