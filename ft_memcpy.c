/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:50:10 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/11 18:37:08 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	ind;

	ind = 0;
	while (ind < n)
	{
		((char *)dest)[ind] = ((char *)src)[ind];
		ind++;
	}
	return (dest);
}
