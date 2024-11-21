#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
char *ft_strdup (const char *source)
{
    char *result;
    size_t len;

    len = strlen(source) + 1;
    result = malloc (len * sizeof(char));
    if(!result)
        return (0);
    memcpy(result, source, len);
    return (result);
}

int main (void)
{
    const char *original = "The original string.";
    char *copy = ft_strdup(original);

    char *ptr = copy;
    while (*ptr != '\0')
    {
        *ptr = toupper(*ptr);
        ptr++;
    }

    printf("%s\n", copy);

    free(copy);

    return 0;
}
