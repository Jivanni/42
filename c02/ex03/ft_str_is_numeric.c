

#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{

char string[4] = "244";
char *ptr = string;


printf("%d\n",ft_str_is_numeric(ptr));

} 


int ft_str_is_numeric(char *str)
{
    while (*str)
        {
                if (!(*str >= '0' && *str <= '9'))
                {
                        return (0);
                }
                str++;
                          
        }
        return(1);
} 
