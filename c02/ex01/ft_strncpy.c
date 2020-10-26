/*
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{

char string[7] = "abcdef";
char dest[15];

printf("%s\n",ft_strncpy(dest, string, 10));

} 
 */
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while (i++ < n && (*dest++ = *src++))
    {
    while (i < n && !*src)
    {
        *dest++ = '\0';
        i++;
    }
    }
    return dest - n;
}
