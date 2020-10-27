
#include <stdio.h>

int    ft_str_is_printable(char *str);

int main()
{

char string[] = "fsfsff";
char *ptr = string;


printf("%d\n",ft_str_is_printable(ptr));

} 

int     ft_str_is_printable(char *str)
        {
        while (*str)
        {
                if (!(*str >= 32 && *str <= 127))
                {
                        return (0);
                }
                str++;
                          
        }
        return(1);

        }