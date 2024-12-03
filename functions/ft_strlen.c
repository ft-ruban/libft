/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:10:20 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/03 13:20:04 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <ctype.h>
//#include <string.h>

size_t	ft_strlen(char str[]);
/*
int	main(void)
{
	char	str[42] = "forty-two";
	printf("origin : %zu\n ft : %zu\n",strlen(str), ft_strlen(str));

	return(0);
}
*/

size_t	ft_strlen(char str[])
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
