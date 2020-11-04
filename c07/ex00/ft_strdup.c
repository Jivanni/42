#include <stdlib.h>

int		ft_strlen(char *str)
{
	size_t len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char *ft_strdup(char *src)
{
	char *out;
	size_t len;

	len = ft_strlen(src);
	if ((char *) malloc(sizeof(char) * len + 1) == NULL)
		return(NULL);
	out = (char *) malloc(sizeof(char) * len + 1);
	while(*src)
	{
		*out++ = *src++;
	}
	*out = '\0';
	return (out - len);
}

#include <stdio.h>
int main()
{
	char *test = "helloooo";

	printf("%s", ft_strdup(test));

}
