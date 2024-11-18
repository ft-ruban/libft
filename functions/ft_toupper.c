/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:00:40 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/18 16:28:24 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(int c);

/*
int	main(void)
{
	int c = 97;
	printf("%c", c);
	printf("%c",ft_toupper(c));
	return (0);
}
*/
int	ft_toupper(int c)
{
	if (c < 'a' || c > 'z' )
		return (c);
	else
		return (c - 32);
}
