/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:10:20 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/14 11:08:22 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c);
/*
int	main(void)
{
	int	c = 'c';
	printf("origin : %d\n ft : %d\n",isprint(c), ft_isprint(c));

	return(0);
}
*/

int	ft_isprint(int c)
{
	if ((c >= 0 && c <= 31) || c >= 127)
	{
		return (0);
	}
	else
	{
		return (42);
	}
}