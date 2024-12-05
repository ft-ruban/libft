/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:18:06 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/05 14:36:53 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	str = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (!str)
		return (NULL);
	while (s1[j] != 0)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = 0;
	return (str);
}
/*
int main(void)
{
	char s1[42] = "lorem ipsumdolor ";
	char s2[42] = "sit amet";
	char *result;

	//result = malloc(5);
	result = ft_strjoin(s1, s2);

//	while (result)
	
	{
		printf("%s\n",result);		result++;
	}
}*/
