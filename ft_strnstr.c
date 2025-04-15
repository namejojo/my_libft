/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:28:40 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/15 12:46:06 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*needle;
	char	*haystack;
	char	*ret;


	haystack = (char *)big; 
	needle = (char *)little;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len-- > 0)
	{
		needle = (char *)little;
		if (*haystack == *needle)
		{
			ret = haystack;
			while (*haystack == *needle)
			{
				haystack++;
				needle++;
				if (*needle == '\0')
					return ((char *)ret);
			}
		}
		haystack = ++ret;
	}
	return (NULL);
}