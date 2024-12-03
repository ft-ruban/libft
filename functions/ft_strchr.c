/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:51:39 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/03 13:16:53 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c);
/*
int	main(void)
{
	char s[42] = "forty-two";
	int c = 't';
	//int i = 0;

	printf("%s\n",ft_strchr(s,c));
	while(s[i] != '\0')
	{
		printf("%c\n",s[i]);
		i++;
	}
	*/
//}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
