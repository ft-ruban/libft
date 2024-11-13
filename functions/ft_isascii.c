/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:10:20 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/13 16:46:13 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isascii(int c);
/*
int	main(void)
{
	int	c = 135;
	printf("origin : %d\n ft : %d\n",isascii(c), ft_isascii(c));

	return(0);
}
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (42);
	}
	else
	{
		return (0);
	}
}
