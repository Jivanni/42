/*test
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	char string[5] = {'a', 'b', 'c', 'd', '\0'};
	char *prt = &string[0];
	
	printf("%d\n",ft_strlen(prt));
}
*/
int ft_strlen(char *str)
{	
	int len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	return(len);

}