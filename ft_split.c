/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:50:55 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/11 14:48:41 by jlima-so         ###   ########.fr       */
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

static char	*ft_strndup(const char *s, char c)
{
	char	*src;
	char	*dest;
	int		size;

	size = 0;
	while (s[size])
	{
		if (s[size] == c)
			break ;
		size++;
	}
	if (s == NULL)
		return (NULL);
	src = (char *)s;
	dest = malloc(size + 1);
	ft_bzero(dest, size + 1);
	if (dest == NULL)
		return (NULL);
	dest = ft_memcpy(dest, src, size);
	return (dest);
}

static void	*free_all(char **strs, int count)
{
	int	ind;

	ind = -1;
	while (++ind < count)
		free (strs[ind]);
	free (strs);
	return (NULL);
}

static char	**alloc_mem(char **ret, int str_count)
{
	ret = malloc((str_count + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	ret[str_count] = NULL;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*str;
	int		str_count;
	int		indv;

	if (s == NULL || c == '\0')
		return (NULL);
	str = (char *)s;
	str_count = ft_str_count(str, c);
	ret = alloc_mem(ret, str_count);
	if (ret == NULL)
		return (NULL);
	indv = 0;
	while (str_count-- > 0)
	{
		while (*str == c)
			str++;
		ret[indv] = ft_strndup(str, c);
		if (ret[indv] == NULL && indv != str_count)
			return (free_all(ret, indv));
		indv++;
		while (*str != c)
			str++;
	}
	return (ret);
}
