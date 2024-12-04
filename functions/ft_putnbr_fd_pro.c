/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_pro.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:59:11 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/04 07:33:17 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	length;
	char *itoa_result;

	itoa_result = ft_itoa(n); //besoin de finir cette partie
	length = strlen(itoa_result);
	write (fd, itoa_result, length);
	return ;
}

int main(void)
{
    int handle = open("test.txt", O_WRONLY);
    char s[64] = "forty-two";
    ft_putnbr_fd(s, handle);
    printf("Success!\n");
	return (0);
}

