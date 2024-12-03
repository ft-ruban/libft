/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:18:19 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/03 13:20:39 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);
/*
int	main(void)
{
	char s1[42] = "fozty-two";
	char s2[42] = "forty-tw";
	size_t n = 3;
	printf("%d",ft_strncmp(s1, s2, n));
}
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n >= 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
