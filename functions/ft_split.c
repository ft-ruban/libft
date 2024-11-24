#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_substrings(char const *s, char c);
char **splited(char const *s, char **ptr, char c);

char **ft_split(char const *s, char c)
{
    int count = count_substrings(s, c);
    char **ptr = malloc((count + 1) * sizeof(char *));
    
    count = 0;
    return (splited(s, ptr, c));
}

char **splited(char const *s, char **ptr, char c)
{
    int i;
    int j;
    int k;
    int l;
    int count;

    i = 0;
    j = 0;
    k = 0;
    l = 0;
    count = 0;
    while(s[i] != 0)
    {
        while(s[i] != c && s[i] != 0)
        {
            printf("test\n");
            count++;
            i++;
        }
        ptr[j] = malloc((count + 1) * sizeof(char));
        while (s[l] != s[i])
        {
            ptr[j][k] = s[l];
            k++;
            l++;
        }
        printf("test fin\n");
        ptr[j][k] = 0;
        l++;
        i++;
        j++;
        k = 0;
        count = 0;
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
        while(s[i] == c && s[i] != 0)
            i++;
        if (s[i] != 0)
        {
            counter ++;
            while (s[i] != c && s[i] != 0)
                i++;
        }
    }

    return (counter);
}

int main(void)
{
    char s[64] = "Forty-Two-Three-";
    char c = '-';
    char **result = ft_split(s,c);

    printf("%s\n", result[0]);
    printf("%s\n", result[1]);
    printf("%s\n", result [2]);
}
