/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:36:02 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/06 08:08:09 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		trim(const char *set, char c);
char	*result(char const *s1, size_t start, size_t end);

char	*ft_strtrim(char const *s1, char const *set)
{
	char  *ptr;
	size_t	i;
	size_t	j;

	i = 0;
	ptr = malloc(sizeof(char) * 1);
	if (!ptr)
		return (NULL);
	ptr[0] = 0;
	if (!s1)
		return (ptr);
	j = strlen(s1) - 1;
	if (strlen(s1) == 0)
		return (0);
	while (trim(set, s1[i]))
		i++;
	while (trim(set, s1[j]))
		j--;
	return (result(s1, i, j - (i - 1)));
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
	size_t	i;

	i = 0;
	if (end <= 0 || start >= strlen(s1))
		return (0);
	str = malloc(sizeof(char) * end + 1);
	if (!str)
		return (0);
	while (i < end)
	{
		str[i] = s1[start + i];
		i++;
	}
		str[i] = 0;
	return (str);
}

int main(void)
{
    char s1[64] = "  \t \t \n   \n\n\n\t";
    char s2[64] = "";
    char *ns =ft_strtrim(s1, s2);

    printf("%s", ns);

    return 0;
}

