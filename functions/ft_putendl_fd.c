/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:59:11 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/03 10:43:13 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	length;

	length = strlen(s);
	write (fd, s, length);
	write (fd, "\n", 1);
	return ;
}
/*
int main(void)
{
    int handle = open("test.txt", O_WRONLY);
    char s[64] = "forty-two";
    ft_putendl_fd(s, handle);
    printf("Success!\n");
	return (0);
}
*/
