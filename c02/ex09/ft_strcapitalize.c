#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{

char string[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
char *ptr = string;


printf("%s\n",ft_strcapitalize(ptr));

} 

char *ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {   
        if (str[i] >= 'a' && str[i] <= 'z')
        {
        str[i] -= 32; 
        }
        i++;
    }   
    return str;
}