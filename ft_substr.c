/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:22:15 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/10 19:26:41 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*src;
	size_t	count;

	if (s == NULL || len <= 0 || count == '\0')
		return (NULL);
	if (ft_strlen((char *)s) < start )
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
	return (ret);
}
