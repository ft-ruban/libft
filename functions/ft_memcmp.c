/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:33:54 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/04 16:11:48 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
//	unsigned char *it1 = (unsigned char)s1;
//	unsigned char *it2 = (unsigned char)s2;

	while (n != 0 && *(unsigned char) s1 == *(unsigned char)s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1 - s2);
}

/*
int	main(void)
{
	char s1[42] = "forty_two";
	char s2[42] = "fozty_two";
	size_t n	= 8;
	printf("%d\n",memcmp(s1,s2,n));
	return (0);
}
*/

