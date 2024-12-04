/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:48:44 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/04 07:11:49 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char	*ft_strdup(const char *source)
{
	char	*result;
	size_t	len;

	len = strlen(source) + 1;
	result = malloc (len * sizeof(char));
	if (!result)
		return (0);
	memcpy (result, source, len);
	return (result);
}
/*
int main (void)
{
    const char *original = "The original string.";
    char *copy = ft_strdup(original);

    char *ptr = copy;
    while (*ptr != '\0')
    {
        *ptr = toupper(*ptr);
        ptr++;
    }

    printf("%s\n", copy);

    free(copy);

    return 0;
}*/
