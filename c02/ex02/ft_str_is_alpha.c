
#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{

char string[] = "&Eebda";
char *ptr = string;


printf("%d\n",ft_str_is_alpha(ptr));

} 


int ft_str_is_alpha(char *str)
{
   while (*str)
        {
                if (!(*str >= 'A' && *str <= 'Z') && !(*str >= 'a' && *str <= 'z'))
                {
                        return (0);
                }
                str++;
                          
        }
        return(1);
}