/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:51:39 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/18 17:26:20 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int	main(void)
{
	char s[42] = "forty-two";
	int c = 't';
	int i = 0;

	printf("%s\n",strchr(s,c));
	while(s[i] != '\0')
		printf("%c\n",s[i]);
}

char *ft_strchr(const char *s, int c)
{
	int	i;
	char *test;
	int j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				return ((char*)s + i);
			}
		}
	}
	return (0);
}
