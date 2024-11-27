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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convert(long n,  int i, char *result, char *buff);
char *count_for_malloc(long *integer, int *is_negative);

char *ft_itoa(int n)
{
	char *result;
	int i;
	char *buff;
    long ln;

	i = 0;
    ln = (long) n;
    if (n == 0)
    {
        result = malloc(1 + 1 * sizeof(char));
        result[0] = '0';
        result[1] = 0;
        return (result);
    }
	buff = count_for_malloc(&ln ,&i);
	result = count_for_malloc(&ln,&i);
	if(!result)
		return (0);
    if(!buff)
        return (0);
    result = convert (ln, i, result, buff);
	return (result);
}

char *convert(long n,  int i, char *result, char *buff)
{
	int length;
    int j;

    length = i;
    j = i;
	while (n > 0)
	{
		buff[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	i--;
	while (i != length - 1)
	{
		result[j++] = buff[i--];
	}
    result[j] = 0;
	return (result);
}

char *count_for_malloc(long *integer,int *is_negative)
{
	char *result;
	int	  count;
	long	  buff;

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
	return (result);
}

int main (void)
{
	int n = -42;
	char *ptr = ft_itoa(n);
	printf("FINAL : %s", ptr);
}
