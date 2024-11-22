/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:42:27 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/22 10:45:49 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>

void	*ft_calloc(size_t element_count, size_t element_size)
{
	char	*ptr;

	ptr = 0;
	if (element_count == 0 || element_size == 0)
		return (0);
	ptr = malloc(sizeof(size_t) * (element_size));
	if (ptr == 0)
		return (0);
	while (element_count--)
	{
		*ptr = 0;
		ptr++;
	}
	return (ptr);
}
/*
int main(void)
{
    int num_rats = 5;
    int *rats_list = 0;
    //int i;


    rats_list = ft_calloc(num_rats, sizeof(int));

    while (num_rats--)
        printf("[%d]", rats_list[num_rats]);
}*/
