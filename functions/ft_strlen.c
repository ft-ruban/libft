/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:10:20 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/14 11:32:33 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_strlen(char str[]);

int	main(void)
{
	char	str[50] = "forty-two";
	printf("origin : %s\n ft : %s\n",strlen(str), ft_strlen(str));

	return(0);
}


int	ft_strlen(char [])
{
	int	i;
	
	i = 0;
	while (str[i+1] != '\0') 
	{ 
		i++
	}
	return (i+1);
}
