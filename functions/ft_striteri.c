/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:02:14 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/03 10:11:50 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void	capslock(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}
/*
int main() {
    char str[] = "hello world";

    printf("Before: %s\n", str);

    ft_striteri(str, capslock);

    printf("After: %s\n", str);
	return (0);
}*/
