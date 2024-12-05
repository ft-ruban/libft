/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:59:16 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/05 14:16:10 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*error_malloc(char *ptr, char const *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	ptr = NULL;
	if (start >= strlen(s) || s[0] == 0)
		return (error_malloc(ptr, s));
	i = 0;
	if (strlen(s) - start < len)
		ptr = malloc(sizeof(char) * (strlen(s) - start + 1));
	else
		ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (len-- > 0 && s[start])
	{
		ptr[i] = s[start];
		start ++;
		i++;
	}
	ptr [i] = 0;
	return (ptr);
}

char	*error_malloc(char *ptr, char const *s)
{
	if (s == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * 1);
	if (!ptr)
		return (NULL);
	ptr[0] = 0;
	return (ptr);
}
/*
int main(void)
{
	char s[42] = "tripouille";
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
	free(result);
}


s = "Hel|lo |world!"
ft_substr(s, 3 ,3)

start + len <= strlen(s)
	start = s[3]
	end = start + len = s[start + len]
len_sub = end - start + 1 (\0)

if ( start + len > strlen(s))
	end = strlen(s + start)
*/
