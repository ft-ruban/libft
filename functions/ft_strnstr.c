/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:22:13 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/05 11:10:25 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> //-lbsd
#include <bsd/string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	n;
	size_t	test;

	test = len;
	n = strlen(s2);
	if (!s2)
		return ((char *)s1);
	if (n == 0)
		return ((char *)s1);
	while (*s1 && len)
	{
		if (!strncmp(s1, s2, n)&& len >= strlen(s2))
		{
			if(strlen (s2) > test)
				return (NULL);
			return ((char *)s1);
		}
		s1++;
		len--;
	}
		return (NULL);
}
/*
int	main(void)
{
	char s1[42] = "MZIRIBMZIRIBMZE123";
	char s2[42] = "MZIRIBMZE";
	size_t len = 8;
	char* p;

	p = ft_strnstr(s1,s2,len);
//	p = strnstr(((void*)0), "fake", 3);

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
