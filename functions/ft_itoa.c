/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:49:41 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/26 18:08:01 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* - while loop to detect the negative sign + size allocate with malloc

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *count_for_malloc(int *integer, int *is_negative);

char *ft_itoa(int n)
{
	char *result;
	int i;
	int j;
	char *testi;
	int lenght;

	i = 0;
	if (n == 0 || n == -2147483648)
	{
		result = exceptionnal_cases(n);
		if(!result)
			return (0);
		return (result);
	}
	testi = count_for_malloc(&n ,&i);
	result = count_for_malloc(&n,&i);
	if(!result)
		return (0);
	j = i;
	lenght = i;
	printf("n: %d\n j = %d\n i = %d \n",n, i, j);
	//printf("result : %s\n",result);
	//if for the 0 case
	while (n > 0)
	{
		testi[i] = n % 10 + 48;
		n /= 10;
		//printf("%c", testi[i]);
		i++;
	}
	i--;
	while (i != lenght - 1)
	{
		result[j++] = testi[i--];
		//i--;
		//j++;
	}
	return (result);
}

char *exceptionnal_cases(n);
{
	char *ptr;
	if (n == 0)
	{
		malloc(1 * sizeof(char));
		if(!malloc)
			return (0);
		ptr[0] = '0';
		return (ptr);
	}
	else 
	{
		
	}
	
}

char *count_for_malloc(int *integer,int *is_negative)
{
	char *result;
	int	  count;
	int	  buff;

	count = 0;
	buff = *integer;
	if (*integer < 0)
	{
		(*is_negative)++;
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
	//printf("fincount\n");
	//printf("%d", *integer);
	return (result);
}

int main (void)
{
	int n = 0;
	char *ptr = ft_itoa(n);
	//ft_itoa(n);
	printf("FINAL : %s", ptr);
}
