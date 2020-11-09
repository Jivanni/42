#include "trim.h"
#include "str_utilities.h"

int ft_isspace(char str)
{
	return((str >= 9 && str <= 13) || str == 32);
}

char *ltrim(char *s)
{
    while(ft_isspace(*s)) s++;
    return s;
}

char *rtrim(char *s)
{
    char* back = s + ft_strlen(s);
    while(ft_isspace(*--back));
    *(back+1) = '\0';
    return s;
}

char *trim(char *s)
{
    return rtrim(ltrim(s));
}
