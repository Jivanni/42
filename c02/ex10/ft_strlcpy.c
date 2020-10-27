#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
char string1[7] = "abcdef";
char string2[7] = "abcdef";
char dest1[15];
char dest2[15];

printf("ft %d\n",ft_strlcpy(dest1, string1, 5));
printf("in %ld\n",strlcpy(dest2, string2, 5));

printf("ft %s\n",dest1);
printf("in %s\n",dest2);

}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{

   int i = 0;
    while (i < size - 1 && (*dest++ = *src++))
    {
        i++;
    }
    *dest = '\0';
    return size - 1;
    
}
