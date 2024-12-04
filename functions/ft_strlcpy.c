/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:58:50 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/04 11:20:48 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//#include <bsd/string.h> //-lbsd
//#include <unistd.h>
//#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/*
int	main(void)
{
	char dst[42] = "forty-two";
	const char src[42] = "skibidi";
	size_t size = 5;
	int i = 0;

	while (dst[i] != '\0')
	{
	printf("ft = %c ft_size = %zu\n",dst[i],ft_strlcpy(dst,src,size));
	i++;
	}
	char dst2[42] = "forty-two";
	const char src2[42] = "skibidi";
	size = 5;
	i = 0;

	while (dst2[i] != '\0')
	{
	printf("normal = %c size = %zu\n",dst2[i],strlcpy(dst2,src2,size));
	i++;
	}
	return 0;
}
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	return_val;

	if(size == 0)
		return (strlen(src));
	return_val = 0;
	while (--size > 0 && src[return_val] != '\0')
	{
		dst[return_val] = src[return_val];
		return_val++;
	}
	dst[return_val] = '\0';
	while (src[return_val] != '\0')
		return_val++;
	return (return_val);
}
