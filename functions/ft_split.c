/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:54:22 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/26 16:15:37 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		count_substrings(char const *s, char c);
char	**splited(char const *s, char **ptr, char c, int i);
void	count_size(char const *s, char c, int *count, int *i);

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**ptr;

	i = 0;
	count = count_substrings(s, c);
	ptr = malloc((count + 1) * sizeof(char *));
	if (!ptr)
		return (0);
	count = 0;
	ptr = splited(s, ptr, c, i);
	if (!ptr)
		return (0);
	return (ptr);
}

char	**splited(char const *s, char **ptr, char c, int i)
{
	int		j;
	int		k;
	int		l;
	int		count;

	j = 0;
	k = 0;
	l = 0;
	while (s[i] != 0)
	{
		count = 0;
		while (s[i++] == c)
			l++;
		count_size (s, c, &count, &i);
		ptr[j] = malloc((count + 1) * sizeof(char));
		if (!ptr[j])
			return (0);
		while (s[l] != s[i])
			ptr[j][k++] = s[l++];
		ptr[j++][k] = 0;
		k = 0;
	}
	return (ptr);
}

void	count_size(char const *s, char c, int *count, int *i)
{
	while (s[*i] != 0 && s[*i] != c)
	{
		(*count)++;
		(*i)++;
	}
}

int	count_substrings(char const *s, char c)
{
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
		{
			counter++;
			while (s[i] != c && s[i] != 0)
				i++;
		}
	}
	return (counter);
}

int main(void)
{
    char s[64] = " Forty-- Two -Three-";
    char c = ' ';
    char **result = ft_split(s,c);

    printf("%s\n", result[0]);
    printf("%s\n", result[1]);
    printf("%s\n", result [2]);

}
