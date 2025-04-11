/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:22:15 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/11 19:07:58 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*src;
	size_t	count;

	if (s == NULL || len <= 0)
		return (NULL);
	if (ft_strlen((char *)s) < start)
		return (NULL);
	count = 0;
	ret = (char *)ft_calloc(len + 1, 1);
	if (ret == NULL)
		return (0);
	src = (char *)s;
	while (count < len && src[start])
	{
		ret[count] = src[start];
		count++;
		start++;
	}
	return (ret);
}
