/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:22:13 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/04 07:11:15 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> //-lbsd

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	n;

	n = strlen(s2);
	if (s1 ||!s2)
		return (0);
	if (n == 0)
		return (0);
	if (n > len)
		return (0);
	while (*s1 && len--)
	{
		if (!memcmp(s1, s2, n))
			return ((char *)s1);
		s1++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[42] = "forty-two";
	char s2[42] = "ty";
	size_t len = 10;
	char* p;

	p = ft_strnstr(s1,s2,len);

if (p) 
	{
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is "
               "'%s'",
               s2, s1, p);
    }
    else
        printf("String not found\n");

    return 0;
}*/
