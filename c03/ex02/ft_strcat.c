char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	k = 0;
	while(dest[i])
		i++;
	while(src[k])
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
