/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:10:20 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/14 13:13:04 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>

int	ft_strlen(char str[]);
/*
int	main(void)
{
	char	str[42] = "forty-two";
	printf("origin : %lu\n ft : %i\n",strlen(str), ft_strlen(str));

	return(0);
}
*/

int	ft_strlen(char str[])
{
	int	i;
	
	i = 0;
	while (str[i] != '\0') 
	{ 
		i++;
	}
	return (i);
}
