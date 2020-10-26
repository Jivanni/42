
/*
#include <stdio.h>

int     ft_str_is_lowercase(char *str);

int main()
{

char string[3] = "AS";
char *ptr = string;


printf("%d\n",ft_str_is_lowercase(ptr));

} 
*/
int     ft_str_is_lowercase(char *str)
{
    while (*str++ && !(*str >= 'a' && *str <= 'z'))
    {
        return (0); 
    }      
        return(1);
}