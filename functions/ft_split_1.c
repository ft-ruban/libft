#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_substrings(char const *s, char c);
char **splited(char const *s, char **ptr, char c, int i, int count);

char **ft_split(char const *s, char c)
{
    int i;
    int count;
    char **ptr;
    
    i = 0;
    count = count_substrings(s, c);
    ptr = malloc((count + 1) * sizeof(char *));
    //securemalloc
    count = 0;
    

    return (splited(s, ptr, c, i, count));
}

char **splited(char const *s, char **ptr, char c, int i, int count)
{
    int j;
    int k;
    int l;

    j = 0;
    k = 0;
    l = 0;
    while(s[i] != 0)
    {
        while(s[i] != c && s[i] != 0)
        {
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
        ptr[j][k] = 0;
        while(s[i] == c)
        {
            i++;
            l++;
        }
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
        while(s[i] == c)
            i++;
        if (s[i] != 0)
        {
            counter++;
             while (s[i] != c && s[i] != 0)
                i++;
        }   
    }
    // printf("%d",counter);
    return (counter);
}

int main(void)
{
    char s[64] = "Forty--Two-Three-";
    char c = '-';
    char **result = ft_split(s,c);

    printf("%s\n", result[0]);
    printf("%s\n", result[1]);
    printf("%s\n", result [2]);
}
