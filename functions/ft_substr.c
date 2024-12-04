/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:59:16 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/04 12:35:27 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	if (s == NULL)
		return (NULL);
	
	if (start >= strlen(s) || s[0] == 0)
	{
		ptr = malloc(sizeof (char) * 1);
		ptr[0] = 0;
		return (ptr);
	}
	i = 0;
	ptr = malloc(sizeof(char) * (len - start + 1));
	if (!ptr)
		return (NULL);
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

/*
s = "Hel|lo |world!"
ft_substr(s, 3 ,3)

start + len <= strlen(s)
	start = s[3]
	end = start + len = s[start + len]
len_sub = end - start + 1 (\0)

if ( start + len > strlen(s))
	end = strlen(s + start)
*/
