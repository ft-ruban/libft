/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:49:41 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/26 10:25:05 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* - while loop to detect the negative sign + size allocate with malloc

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *count_for_malloc(int *integer, int is_negative);

char *ft_itoa(int n)
{
	char *result;

	result = count_for_malloc(&n,is_negative);
	if(!result)
		return (0);
	printf("%d",n);
	printf("%s",result);
	//while (integer > 0
	return (result);
}

char *count_for_malloc(int *integer,int is_negative)
{
	char *result;
	int	  count;
	int	  buff;

	count = 0;
	buff = *integer;
	if (*integer < 0)
	{
		is_negative++;
		(*integer) = (*integer)  * -1;
		count++;
	}
	if (integer == 0)
		count++;
	while (buff != 0)
	{
		buff /= 10;
		count++;
	}
	result = malloc(count + 1 * sizeof(char));
	if(!result)
		return 0;
	if(is_negative)
		result[0] = '-';
	return (result);
}

int main (void)
{
	int n = -42;
	
	ft_itoa(n);
	//printf("%s", ft_itoa(n));
}
