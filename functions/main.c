#include "libft.h"
#include <stdio.h>

//void	*ft_memset(void *s, int c, size_t n);

int	main (void)
{
	char string [42] = "forty-two";
	int	character = '4';
	int number = 5;
	int	i = 0;	
	ft_memset(string, character, number);

	while (string [i] != '\0') 
	{
		printf("%c",string [i]);
		i++;
	}
	return (0);

}
