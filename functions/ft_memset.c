/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:59:27 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/14 16:08:04 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdio.h>

void ft_memset(void *s, int c, size_t n);
/*
int	main (void)
{
	char string [42] = "forty-two";
	int	character = '4';
	int number = 5;
	int	i = 0;	
	ft_memset(string, character, number);

	while (string [i] != '\0') 
	{
		printf("%c",string [i]);
		i++;
	}
	return (0);

}
*/
void ft_memset(void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
}
