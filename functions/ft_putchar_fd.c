#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
    return;
}

int main(void)
{
    int handle = open("test.txt", O_WRONLY);
    //... You need to check the result here
    char c = 'b';
    ft_putchar_fd(c, handle);     
    printf("Success!");

}
