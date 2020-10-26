
#include <stdio.h>

int    ft_str_is_printable(char *str);

int main()
{

char string[5] = "èà";
char *ptr = string;


printf("%d\n",ft_str_is_printable(ptr));

} 

int     ft_str_is_printable(char *str)
{
    while (*str++ && !(*str >= 32 && *str <= 127))
        {
                return (0);          
        }
        return(1);
}