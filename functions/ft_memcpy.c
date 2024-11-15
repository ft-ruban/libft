/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:59:27 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/15 10:23:08 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
/*
int	main (void)
{
	char string [42] = "forty-two";
	const char src[42] = "joj";
	int number = 3;
	int	i = 0;	
	ft_memcpy(string, src, number);

	while (string [i] != '\0') 
	{
		printf("%c",string [i]);
		i++;
	}
	return (0);

}
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_char;
	char	*src_char;
	int		i;

	i = 0;
	dest_char = (char *) dest;
	src_char = (char *) src;
	while (n != 0)
	{
		dest_char[i] = src_char[i];
		n--;
		i++;
	}
	return (dest_char);
}
