/*
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{

char string[6] = "";
char *ptr = string;


printf("%d\n",ft_str_is_alpha(ptr));

} 
*/

int ft_str_is_alpha(char *str)
{
    while (*str++ && !((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
    {
        return (0); 
    }
    return(1);
}