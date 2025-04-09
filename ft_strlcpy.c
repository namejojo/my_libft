/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:59:16 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/09 23:06:19 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src)
{
	size_t	ind;
	size_t	size;
	char	*s;

	s = (char *)src;
	size = ft_strlen (s);
	ind = 0;
	while (ind < size - 1 && s[ind])
	{
		dst[ind] = s[ind];
		ind++;
	}
	while (ind < size)
	{
		dst[ind] = '\0';
		ind++;
	}
	return (size);
}
