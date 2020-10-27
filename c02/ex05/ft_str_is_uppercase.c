
#include <stdio.h>

int     ft_str_is_uppercase(char *str);

int main()
{

char string[] = "LRRT";
char *ptr = string;


printf("%d\n",ft_str_is_uppercase(ptr));

} 

int     ft_str_is_uppercase(char *str)
{
    while (*str)
        {
                if (!(*str >= 'A' && *str <= 'Z'))
                {
                        return (0);
                }
                str++;
                          
        }
        return(1);
} 