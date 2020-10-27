#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);


int main()
{
char string[7] = "abcdef";
char dest[15];

printf("%d\n",ft_strlcpy(dest, string, 10));

printf("%s\n",dest);

}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{

   int i = 0;
    while (i++ < size && (*dest++ = *src++))
    {
        ;
    }
    *dest++ = '\0';
    return i;
    
}
