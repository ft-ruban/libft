/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:10:20 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/13 15:50:43 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int c);
/*
int	main(void)
{
	int	c = 48;
	printf("origin : %d\n ft : %d\n",isdigit(c), ft_isdigit(c));

	return(0);
}
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (42);
	}
	else
	{
		return (0);
	}
}
