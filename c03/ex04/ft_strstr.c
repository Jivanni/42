char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	i = 0;

	while(to_find[i])
	{
		while(*str = *to_find || !*to_find)
		{
			if (!*to_find)
			{

			}

		}
		if (*str = *to_find)
		{
			char *ptr;
			ptr = str;
			return (ptr);
		}
		str++;
		to_find++;
	}
	return (str);
}



#include <string.h>
#include <stdio.h>
#include <string.h>


int		main()
{
	char haystack[] = "Foo Bar Baz";
	char needle[] = "Bar";

	printf("%s\n", ft_strncat(haystack, needle));
	//printf("%s\n", strncat(str3, str4, 2));

}
