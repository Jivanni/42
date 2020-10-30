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
	const long int dest_len = i;
	if (((long)(size) - dest_len - 1) < 0)
		return(0);

	while(src[k] && k <= (size - dest_len - 1))
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
	int buff = 11;
	char dest1[] = "12345";
	char src1[] = "678";
	char dest2[] = "12345";
	char src2[] = "678";

	printf("ft %d - %s\n", ft_strlcat(dest1, src1, buff), dest1);
	printf("bi %ld - %s\n", strlcat(dest2, src2, buff), dest2);



}
