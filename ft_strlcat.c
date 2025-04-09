/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:12:29 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/09 23:05:36 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	ind;
	size_t	inds;

	size = size - ft_strlen(dst);
	ind = 0;
	while (dst[ind])
		ind++;
	while (inds < size && ((char *)src)[inds])
	{
		dst[ind] = ((char *)src)[inds];
		ind++;
		inds++;
	}
	while (ind < size)
	{
		dst[ind] = '\0';
		ind++;
	}
	if (ft_strlen(dst) + ft_strlen((char *)src) > size)
		return (size);
	return (ind);
}
