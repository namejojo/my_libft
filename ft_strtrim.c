/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 22:18:43 by jlima-so          #+#    #+#             */
/*   Updated: 2025/03/24 22:25:30 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>//naooooo

static int	ft_check(char ch, char *charset)
{
	int	ind;

	ind = 0;
	while (charset[ind])
	{
		if (charset[ind] == ch)
			return (1);
		ind++;
	}
	return (0);
}

static int	ft_strlen_set(char *str, char *set)
{
	int	ind;
	int	total;

	total = 0;
	ind = 0;
	while (str[ind])
	{
		if (ft_check (str[ind], set) == 0)
			total++;
		ind++;
	}
	return (total);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ind;
	int		ind2;
	int		total;
	char	*ret;
	char	*str1;

	ind = 0;
	ind2 = 0;
	str1 = (char *)s1;
	total = ft_strlen_set((char *)s1, (char *)set);
	ret = (char *)malloc(total + 1);
	while (ind2 <= total && str1[ind])
	{
		if (ft_check (str1[ind], (char *)set) == 0)
		{
			ret[ind2] = str1[ind];
			ind2++;
		}
		ind ++;
	}
	ret[ind2] = '\0';
	return (ret);
}
