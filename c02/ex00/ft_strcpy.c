
#include <stdio.h>

char   *ft_strcpy(char *dest, char *src);

int main()
{

char string[] = "abcdef";
char dest[7];

printf("%s\n",ft_strcpy(dest, string));

}

char   *ft_strcpy(char *dest, char *src)
{
    while ((*dest++ = *src++));
    return dest;
}