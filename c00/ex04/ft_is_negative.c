#include <unistd.h>

void    ft_is_negative(int n);
void    ft_putchar(char c);

int     main(void)
{
    ft_is_negative(-6);

    return (0);
}

void ft_is_negative(int n)
{
    char    result;
    result = (n < 0) ? 'N' : 'P';
    ft_putchar(result);

}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}