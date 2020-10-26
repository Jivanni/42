
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main()
{

char string[12] = "helloworld!";

char *src;
char *dest;
*src = string;

printf("%s\n",string);
printf("%s",(ft_strcpy(dest ,src)));

}

char *ft_strcpy(char *dest, char *src)
{
    while(*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    return (dest);
}