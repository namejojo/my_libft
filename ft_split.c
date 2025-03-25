/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:50:55 by jlima-so          #+#    #+#             */
/*   Updated: 2025/03/25 17:46:19 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_count(char *str, char c)
{
	int	ind;
	int	count;

	count = 0;
	ind = 0;
	while (str[ind] != '\0')
	{
		if (str[ind] != c && (str[ind + 1] == '\0'
				|| str[ind + 1] == c))
			count++;
		ind++;
	}
	return (count);
}

static int	ft_strlen_set(char *str, char c)
{
	int	ind;

	ind = 0;
	while (str[ind])
	{
		if (str[ind] == c)
			return (ind);
		ind++;
	}
	return (ind);
}

static char	*ft_strndup(const char *s, int size)
{
	char	*src;
	char	*dest;

	if (s == NULL)
		return (NULL);
	src = (char *)s;
	dest = malloc(size + 1);
	if (dest == NULL)
		return (NULL);
	dest = ft_memcpy(dest, src, size);
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*str;
	int		str_count;
	int		indv;

	str = (char *)s;
	if (str == NULL || c == '\0')
		return (NULL);
	str_count = ft_str_count(str, c);
	ret = malloc((str_count + 1) * sizeof(char *));
	ret[str_count] = NULL;
	indv = 0;
	while (str_count-- > 0)
	{
		while (*str == c)
			str++;
		ret[indv] = ft_strndup(str, ft_strlen_set(str, c));
		indv++;
		while (*str != c)
			str++;
	}
	return (ret);
}
