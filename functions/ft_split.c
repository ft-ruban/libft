#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_substrings(char const *s, char c);

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int k;
    int count = count_substrings(s, c);
    char **ptr = malloc((count + 1) * sizeof(char *));

    // *ptr = malloc(sizeof(char * (strlen(s)));

    k = 0;
    j = 0;
    i = 0;
    while (s[i] != 0)
    {
        if (s[i] == c)
        {
            ptr[j][k] = 0;
            j++;
            k = 0;
            i++;
        }
        ptr[j][k] = s[i];
        i++;
        k++;
    }

    return (ptr);
}

int count_substrings(char const *s, char c)
{
    int i;
    int counter;

    counter = 0;
    i = 0;
    while(s[i] != 0)
    {
        if(s[i] == c)
            counter++;
        i++;
    }
    return (counter);
}

int main(void)
{
    char s[64] = "Forty-Two";
    char c = '-';
    char **result = ft_split(s,c);

    printf("%s", result[0]);
}
