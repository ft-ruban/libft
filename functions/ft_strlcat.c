/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:58:50 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/18 15:54:51 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h> //-lbsd

size_t	ft_strlcat(char *dst, const char *src, size_t size);
/*
int	main(void)
{
	char dst[42] = "123";
	const char src[42] = "4567";
	size_t size = 15;
	int i = 0;
	
	printf("size ft = %zu\n ft = ", ft_strlcat(dst,src,size));
	while (dst[i] != '\0')
	{
	printf("%c",dst[i]);
	i++;
	}
	printf("\n");
	char dst2[42] = "123";
	const char src2[42] = "4567";
	size = 15;
	i = 0;

	printf("size = %zu\n normal :", strlcat(dst2,src2,size));
	while (dst2[i] != '\0')
	{
	printf("%c",dst2[i]);
	i++;
	}
	return 0;
}
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest_len < size && dst[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len >= size)
		return (dest_len + src_len);
	while (i < size - dest_len - 1 && src[i] != '\0')
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	if (i < size - dest_len - 1)
		dst[dest_len + i] = '\0';
	else
		dst[size - 1] = '\0';
	return (dest_len + src_len);
}