#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    int len = 5;
char string1[7] = "abcdef";
char string2[7] = "abcdef";
char dest1[15];
char dest2[15];

printf("ft %d\n",ft_strlcpy(dest1, string1, len));
printf("in %ld\n",strlcpy(dest2, string2, len));

printf("ft %s\n",dest1);
printf("in %s\n",dest2);

}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{

   unsigned int len = 0;
    while (*src)
    {
        if(len < size - 1)
        {
            *dest++ = *src;
        }
        src++;
        len++;
    }
    *dest = '\0';
    return len;
    
}
