/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:59:16 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/11 19:43:50 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	ind;
	size_t	ret;
	char	*s;

	s = (char *)src;
	ind = 0;
	ret = (ft_strlen((char *)src));
	if (size == 0)
		return (ret);
	while (ind < size - 1)
	{
		dst[ind] = s[ind];
		ind++;
	}
	while (ind < size)
	{
		dst[ind] = '\0';
		ind++;
	}
	return (ret);
}
