/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:59:27 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/04 10:53:11 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);
/*
int	main (void)
{
	char string [50] = "Hello, world!";
	ft_memmove(string + 7, string, 6); 
	printf("%s\n",string);
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
}*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_char;
	char	*src_char;

	dest_char = (char *) dest;
	src_char = (char *) src;
	if (dest_char < src_char)
	{
		while (n--)
			*dest_char++ = *src_char++;
	}
	else if (dest_char > src_char)
	{
		dest_char += n;
		src_char += n;
		while (n--)
			*--dest_char = *--src_char;
	}
	return (dest);
}
