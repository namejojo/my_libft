/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:12:29 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/10 22:50:50 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ind;
	size_t	ret;
	size_t	ind2;

	if (ft_strlen(dst) + ft_strlen((char *)src) > size)
		return (ft_strlen((char *)src) + size);
	size = size - ft_strlen(dst);
	ind = 0;
	ind2 = 0;
	while (dst[ind])
		ind++;
	while (ind2 < size && src[ind2])
		dst[ind++] = src[ind2++];
	ret = ind;
	while (ind < size)
	{
		dst[ind] = '\0';
		ind++;
	}
	return (ret);
}
