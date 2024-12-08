/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:59:11 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/08 19:52:10 by ldevoude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate_val_tens(long cast_n)
{
	int	result;

	result = 1;
	while (cast_n >= 10)
	{
		cast_n /= 10;
		result++;
	}
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		tens;
	long	cast_n;
	char	c;
	int		mult;

	mult = 1;
	cast_n = (long)n;
	if (cast_n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (cast_n < 0)
	{
		write(fd, "-", 1);
		cast_n *= -1;
	}
	tens = calculate_val_tens(cast_n);
	while (tens-- != 1)
		mult *= 10;
	while (mult != 0)
	{
		c = (cast_n / mult) + '0';
		cast_n %= mult;
		mult /= 10;
		write(fd, &c, 1);
	}
	return ;
}

/*
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	handle;
	int	n;

	handle = open("test.txt", O_WRONLY);
	n = 10;
	ft_putnbr_fd(n, handle);
	printf("Success!\n");
	return (0);
}
*/
