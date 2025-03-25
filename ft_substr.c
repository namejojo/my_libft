/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:22:15 by jlima-so          #+#    #+#             */
/*   Updated: 2025/03/25 16:39:25 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*src;
	size_t	count;

	count = ft_strlen((char *)s);
	if (s == NULL || len <= 0 || count < start || count == '\0')
		return (NULL);
	count = 0;
	ret = (char *)malloc(len + 1);
	src = (char *)s;
	while (count < len && src[start])
	{
		ret[count] = src[start];
		count++;
		start++;
	}
	while (count < len)
	{
		ret[count] = '\0';
		count++;
	}
	return (ret);
}
