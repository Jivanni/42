
#include <stdio.h>

int     ft_str_is_uppercase(char *str);

int main()
{

char string[] = "";
char *ptr = string;


printf("%d\n",ft_str_is_uppercase(ptr));

} 

int     ft_str_is_uppercase(char *str)
{
    while (*str++ && !(*str >= 'A' && *str <= 'Z'))
        {
                return (0);          
        }
        return(1);
}