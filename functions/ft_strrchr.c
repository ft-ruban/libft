/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldevoude <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:51:39 by ldevoude          #+#    #+#             */
/*   Updated: 2024/11/19 11:00:51 by ldevoude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *string, int searched_char);

/*
int	main(void)
{
	const char s[42] = "forty-two";
	int c = 't';
	//int i = 0;

	printf("%s\n",ft_strrchr(s,c));
}*/

char	*ft_strrchr(const char *string, int searched_char)
{
	int	i;

	i = 0;
	while (*string != '\0')
	{
		i++;
		string++;
	}
	while (i >= 0)
	{
		if (*string == (char)searched_char)
			return ((char *)string);
		string--;
		i--;
	}
	return (0);
}
