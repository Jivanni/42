char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	k = 0;
	while(dest[i])
		i++;
	while(src[k] && k < nb)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
