/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:42:27 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/05 15:29:52 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t element_count, size_t element_size)
{
	char	*ptr;
	size_t	i;
	size_t	total_size;

	total_size = element_count * element_size;
	i = 0;
	ptr = malloc(total_size);
	if (ptr == 0)
		return (NULL);
	while (i != total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main(void)
{
    int num_rats = 10;
    int *rats_list = 0;
    //int i;


    rats_list = ft_calloc(num_rats, 8);

    while (num_rats--)
        printf("[%d]", rats_list[num_rats]);
}*/
