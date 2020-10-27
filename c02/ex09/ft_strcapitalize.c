#include <stdio.h>

char *ft_strcapitalize(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
int char_isalphan (char *str);

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
        if (i == 0 || char_isalphan(&str[i-1]) )
        {
            str[i] = *ft_strupcase(&str[i]);
        }
        else str[i] = *ft_strlowcase(&str[i]);

        i++;
    }   
    return str;
}


char *ft_strupcase(char *str)
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

char    *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {   
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
        str[i] += 32; 
        }
        i++;
    }   
    return str;
}

int char_isalphan (char *str)
{
    return (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9')));
}