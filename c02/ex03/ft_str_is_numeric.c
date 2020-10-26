
/*
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{

char string[3] = "24";
char *ptr = string;


printf("%d\n",ft_str_is_numeric(ptr));

} 
*/

int ft_str_is_numeric(char *str)
{
    while (*str++ && !(*str >= '0' && *str <= '9'))
    {
        return (0); 
    }

    return(1);
}