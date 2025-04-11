/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:26:51 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/11 09:58:59 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	ind;
	char	*s1;
	char	*s2;

	s1 = (char *)str1;
	s2 = (char *)str2;
	ind = 0;
	while (s1[ind] && s2[ind] && s1[ind] == s2[ind] && ind < n - 1)
		ind++;
	return (s1[ind] - s2[ind]);
}
