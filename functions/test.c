#include "libft.h"

int main(void)
{
	char test[64] = "forty-two";
	size_t	result = 0;
	result = ft_strlen(test);

	printf("%zu",result);
}
