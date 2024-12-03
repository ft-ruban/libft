/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:33:54 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/03 13:11:55 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t *n)
{
	char	*s1_ptr;
	char	*s2_ptr;

	s1_ptr = (char *) s1;
	s2_ptr = (char *) s2;
	while (n > 0)
	{
		if (*s1_ptr != *s2_ptr)
			return (*s1_ptr - *s2_ptr);
		s1_ptr++;
		s2_ptr++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[42] = "forty_two";
	char s2[42] = "fozty_two";
	size_t n	= 3;
	printf("%d\n",ft_memcmp(s1,s2,n));
	return (0);
}*/
