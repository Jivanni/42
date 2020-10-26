
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{

char string[7] = "abcdef";
char dest[10];

printf("%s\n",ft_strncpy(dest, string, 9));

} 
 
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while (i < n)
    {
        while((*dest++ = *src++)){}
        
        i++;
        
    }
    return dest;
}