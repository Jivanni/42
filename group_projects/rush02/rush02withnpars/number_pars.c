#include "dict_parse.h"
#include "number_pars.h"
#include <stdio.h>




char* create_num(int n)
{
	int i = 1;
	char *out;
	out = malloc(sizeof(char)* n + 2);
	out[0] = '1';
	while(i <= n)
	{
		out[i] = '0';
		i++;
	}
	out[i] = '\0';
	return (out);
}

void n_parse(char *input, t_entry* dict)
{
	int i = 0;
	char *test = "123456";
	int len = ft_strlen(test);
	//ft_putstr(lookup(dict, input));

	while(i < len)
	{
		if((len - i) % 3 == 0 && test[i] != '0')
			printf("%c centinaia, ", test[i]);
		i++;

		if((len - i) % 3 == 2 && test[i] != '0')
		{
			if(test[i] == '1')
			{
				printf("%c decine, %c unita",test[i], test[i+1]);
				i++;
			}
			else
				printf("%c decine, ",test[i]);
		}
		i++;
		if ((len - i) % 3 == 1 && test[i] != '0')
			printf("%c unita, ",test[i]);
		if(test[i-1] != '1')
			i++;
		if (len - i)
			printf("%s, ", create_num(len - i));
	}

}







