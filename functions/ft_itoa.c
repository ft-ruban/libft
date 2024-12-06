/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:49:41 by ldevoude          #+#    #+#             */
/*   Updated: 2024/12/06 18:53:26 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


char	*convert(long n, int i, char *result, char *buff);
char	*count_for_malloc(long *integer, int *is_negative);

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	char	*buff;
	long	ln;

	i = 0;
	ln = n;
	if (n == 0)
	{
		result = strdup("0");
		if (!result)
			return (malloc(0));

	// result[0] = '0';
		//  result[1] = 0;
		return (result);
	}
	buff = count_for_malloc(&ln, &i);
	if (!buff)
		return (malloc(0));
	result = count_for_malloc(&ln, &i);
	if (!result)
		return (free(buff), malloc(0));
	result = convert (ln, i, result, buff);
	if (!result)
		return (free(buff), malloc(0));
	return (free(buff), result);
}

char	*convert(long n, int i, char *result, char *buff)
{
	int	length;
	int	j;

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

char	*count_for_malloc(long *integer, int *is_negative)

{
	char	*result;
	int		count;
	long	buff;

	count = 0;
	if (*integer < 0)
	{
		if (*is_negative == 0)
			(*is_negative)++;
		(*integer) = (*integer) * -1;
		count++;
	}
	/*if (integer == 0)
		count++;*/
	buff = *integer;
	while (buff > 0)
	{
		buff /= 10;
		// printf("buff :%lu\n",buff);
		count++;
	}
	if (buff < 10)
			count++;
	result = malloc((count + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (*is_negative > 0)
		result[0] = '-';
	return (result);
}

/*#include <limits.h>

int main (void)
{
	int n = INT_MAX;
	char *ptr = ft_itoa(n + 1);
	printf("FINAL : %s", ptr);
}*/
