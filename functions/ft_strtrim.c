/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:36:02 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/06 13:16:59 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		trim(const char *set, char c);
char	*result(char const *s1, size_t start, size_t end);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = strlen(s1);
	if (j == 0)
		return (strdup (""));
	while (i < j && trim(set, s1[i]))
		i++;
	while (j > i && trim(set, s1[j - 1]))
		j--;
	return (result(s1, i, j));
}

int	trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*result(char const *s1, size_t start, size_t end)
{
	char	*str;
	size_t	len;

	len = end - start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	strncpy(str, s1 + start, len);
	str[len] = '\0';
	return (str);
}
/*
int main(void)
{
    char s1[64] = "  \t \t \n   \n\n\n\t";
    char s2[64] = "";
    char *ns =ft_strtrim(s1, s2);

    printf("%s", ns);

    return 0;
}
*/
