/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:32:36 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/07 07:59:52 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	ind;

	ind = 0;
	while (src[ind] != '\0')
	{
		dest[ind] = src[ind];
		ind++;
	}
	dest[ind] = '\0';
	return (dest);
}

static char	*ft_strcat(char *dest, char *src)
{
	int	ind;
	int	ind2;

	ind = 0;
	ind2 = ft_strlen(dest);
	while (src[ind] != '\0')
	{
		dest[ind2] = src[ind];
		ind++;
		ind2++;
	}
	dest[ind2] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total;
	char	*dest;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	dest = malloc(total + 1);
	if (dest == NULL)
		return (NULL);
	dest = ft_strcpy(dest, (char *)s1);
	dest = ft_strcat(dest, (char *)s2);
	return (dest);
}
