#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{

char string[5] = "AAAA";
char *ptr = string;


printf("%s\n",ft_strupcase(ptr));

} 

char *ft_strupcase(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {   
        if (str[i] >= 'a' && str[i] <= 'z')
        {
        str[i] -= 32; 
        }
        i++;
    }   
    return str;
}