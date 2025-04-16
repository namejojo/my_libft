/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:32:36 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/16 19:50:35 by jlima-so         ###   ########.fr       */
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
	char	*ret;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	ret = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (ret == NULL)
		return (NULL);
	ret = ft_strcpy(ret, (char *)s1);
	ret = ft_strcat(ret, (char *)s2);
	return (ret);
}
