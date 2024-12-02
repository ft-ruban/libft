#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result;
    unsigned int i;
        
    result = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    
    if (!result)
        return (NULL);

    i = 0;
    while (s[i] != '\0') {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';

    return(result);
}
