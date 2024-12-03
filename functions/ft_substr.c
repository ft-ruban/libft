/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:59:16 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/03 13:21:59 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char) * len);
	while (len-- > 0)
	{
		ptr[i] = s[start];
		start ++;
		i++;
	}
	ptr [start] = 0;
	return (ptr);
}
/*
int main(void)
{
	char s[42] = "forty-two";
	int  start = 3;
	size_t len = 5;
	char *result;

	//result = malloc(5);
	result = ft_substr(s,start,len);

//	while (result)
	
	{
		printf("%s\n",result);
//		result++;
	}
}*/
