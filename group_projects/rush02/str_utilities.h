
#ifndef STR_UTILITIES
# define STR_UTILITIES
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		nb_strs(char **strs);

# define KEY 0
# define VALUE 1

#endif
