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
	// i is at \0
	const unsigned int dest_len = i;
	if ((size - dest_len - 1) < 0)
		return(0);

	while(src[k] && k < (size - dest_len - 2))
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
	int buff = 3;
	char dest1[] = "sadads";
	char src1[] = "sadd";
	char dest2[] = "sadads";
	char src2[] = "sadd";

	printf("ft %d - %s\n", ft_strlcat(dest1, src1, buff), dest1);
	printf("bi %ld - %s\n", strlcat(dest2, src2, buff), dest2);



}
