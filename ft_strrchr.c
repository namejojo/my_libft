/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:08:36 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/17 11:13:46 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		ind;

	ind = ft_strlen((char *)s) + 1;
	while (ind-- > 0)
		if (s[ind] == (char)c)
			return ((char *)s + ind);
	return (NULL);
}
