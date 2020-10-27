
#include <stdio.h>

int     ft_str_is_lowercase(char *str);

int main()
{

char string[4] = "abc";
char *ptr = string;


printf("%d\n",ft_str_is_lowercase(ptr));

} 

int     ft_str_is_lowercase(char *str)
{
        while (*str)
        {
                if (!(*str >= 'a' && *str <= 'z'))
                {
                        return (0);
                }
                str++;
                          
        }
        return(1);
}