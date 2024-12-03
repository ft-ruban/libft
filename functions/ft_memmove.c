/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:59:27 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/03 13:12:50 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);
/*
int	main (void)
{
	char string [42] = "abcdef";
	const char src[42] = "123";
	int number = 1;
	int	i = 0;	
	ft_memmove(string, src, number);

	while (string [i] != '\0') 
	{
		printf("%c",string [i]);
		i++;
	}
	return (0);

}
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_char;
	char	*src_char;
	char	*buff;

	dest_char = (char *) dest;
	src_char = (char *) src;
	buff = (char *) src;
	while (n-- > 0)
		*dest_char++ = *buff++;
	return (dest_char);
}
