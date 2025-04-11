/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 13:53:00 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/11 10:29:00 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*src;
	char	*dest;
	int		size;

	src = (char *)s;
	size = ft_strlen(src);
	dest = malloc(size + 1);
	if (dest == NULL)
		return (NULL);
	dest = ft_memcpy(dest, src, size);
	return (dest);
}
