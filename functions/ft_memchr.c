//#include <stdio.h>
//#include <string.h>

void* ft_memchr(const void* ptr, int ch, size_t count)
{
    const unsigned char *p = ptr;
    unsigned char c = (unsigned char)ch;
    while (count--)
    {
        if (*p == c)
        {
            return((void *)p);
        }
        p++;
    }
    return(0);
}
/*
int main(void)
{
    const char str[] = "ABCDEFG";
    const int chars[] = {'D', 'd'};
    for (size_t i = 0; i < sizeof chars / (sizeof chars[0]); ++i)
    {
        const int c = chars[i];
        const char *ps = ft_memchr(str, c, strlen(str));
        ps ? printf ("character '%c'(%i) found: %s\n", c, c, ps)
           : printf ("character '%c'(%i) not found\n", c, c);
    }
    return 0;
}*/
