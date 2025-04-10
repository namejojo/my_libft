/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:20:24 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/10 13:21:52 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*temp;
	size_t	ind;

	if (n == 0 || s == NULL)
		return (NULL);
	ind = 0;
	temp = (char *)s;
	while (temp[ind] != c && ind < n - 1 && temp[ind])
		ind++;
	if (temp[ind] != c)
		return (NULL);
	return (temp + ind);
}
