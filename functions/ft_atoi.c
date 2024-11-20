/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:26:14 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/20 17:40:50 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include <stdbool.h>

int	ft_atoi(const char *nptr)
{
	int		i;
	long	result;
	bool	negative;

	negative = 0;
	result = 0;
	i = 0;
	while (nptr[i] >= 9 && nptr[i] <= 13 || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negative = 1;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		result += nptr[i] - 48;
		if (nptr[i + 1] <= '9' && nptr[i + 1] >= '0')
			result *= 10;
		i++;
	}
	if (negative == 1)
		result *= -1;
	return (result);
}
/*
int	main(void)
{
	char  nptr[42] = "-420";
	printf("%d",ft_atoi(nptr));
}*/
