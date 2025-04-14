/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:12:29 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/14 20:55:36 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ind;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (src_len + size);
	ind = 0;
	while (ind + dst_len < size - 1 && src[ind])
	{
		dst[dst_len + ind] = src[ind];
		ind++;
	}
	dst[dst_len + ind] = '\0';
	return (src_len + dst_len);
}

// size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dsize)
// {
// 	size_t	i;
// 	size_t	src_len;
// 	size_t	dest_len;

// 	i = 0;
// 	src_len = ft_strlen(src);
// 	dest_len = ft_strlen(dst);
// 	if (dsize == 0)
// 		return (src_len);
// 	if (dest_len >= dsize)
// 		return (dsize + src_len);
// 	while (src[i] && dest_len + i < dsize -1)
// 	{
// 		dst[dest_len + i] = src[i];
// 		i++;
// 	}
// 	dst[dest_len + i] = '\0';
// 	return (dest_len + ft_strlen(src));
// }