/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:28:40 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/14 21:00:07 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*needle;
	char	*ret;

	if (*big == '\0' && *little == '\0')
		return ((char *)big);
	if (*little == '\0')
		return ((char *)big);
	while (*big && len-- > 0)
	{
		needle = (char *)little;
		if (*big == *needle)
		{
			ret = (char *)big;
			while (*big == *needle)
			{
				big++;
				needle++;
				if (*needle == '\0')
					return (ret);
			}
		}
		big++;
	}
	return (NULL);
}
