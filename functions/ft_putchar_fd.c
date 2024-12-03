/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:12:48 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/03 10:13:11 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
/*
int main(void)
{
    int handle = open("test.txt", O_WRONLY);
    //... You need to check the result here
    char c = 'b';
    ft_putchar_fd(c, handle);     
    printf("Success!");

}*/
