/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <ldevoude@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:54:22 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/08 18:57:19 by ldevoude         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int count_size(char const *s, char c, int *i)
{
	//while ((s[*i + 1] != 0 || s[*i] != 0) && s[*i] != c)
	int count;

	count = 0;
	while (s[*i] != 0 && s[*i] != c )
	{
		count++;
		(*i)++;
//		printf("valeur de count : %d\n", *count);
	}
	return (count);
}

char **ft_free_split(char **ptr)
{
	int	index;

	index = 0;
	while (ptr && ptr[index])
	{
		if (ptr[index])
			free(ptr[index]);
		index++;
	}
	if (ptr)
		free(ptr);
	return (NULL);
}

static char	**splited(char const *s, char **ptr, char c, int n_word)
{
	int		j;
	int		k;
	int		l;
	int	i;

	j = 0;
	l = 0;
	i = 0;
	while (j < n_word && s[i] && s[i + 1])
	{
		k = 0;
		while (s[i] == c)
		{
			l++;
			i++;
		}
		ptr[j] = malloc((count_size(s, c, &i) + 1) * sizeof(char));
		//ptr[j] = calloc((count + 1), sizeof(char));
		if (!ptr[j])
			return (ft_free_split(ptr));
		while (l < i)
			ptr[j][k++] = s[l++];
		ptr[j++][k] = '\0';
	}
	return (ptr);
}


static int	count_substrings(char const *s, char c)
{
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			counter++;
			while (*s != c && *s)
				s++;
		}
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**ptr;

	i = 0;
	if (!s)
		return (NULL);
	count = count_substrings(s, c);
	//printf("count = %i\n", count);
	ptr = malloc((count + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr[count] = NULL;
	
	ptr = splited(s, ptr, c, count);
	if (!ptr)
		return (NULL);
	return (ptr);
}

/*int main(void)
{
    char *s = "^^^1^^2a,^^^^3^^^^--h^^^^";
    char c = '^';
    char **result = ft_split(s,c);
	int i = 0;

	while (result && result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	ft_free_split(result);
	return (0);
}*/


