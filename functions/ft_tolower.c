/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:00:40 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/18 16:45:39 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_tolower(int c);

/*
int	main(void)
{
	int c = 58;
	printf("%c", c);
	printf("%c",ft_tolower(c));
	return (0);
}
*/
int	ft_tolower(int c)
{
	if (c < 'A' || c > 'Z' )
		return (c);
	else
		return (c + 32);
}
