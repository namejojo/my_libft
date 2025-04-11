/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:28:40 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/11 19:37:54 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *ndl, int n)
{
	char	*needle;
	char	*ret;

	if (*haystack == '\0' && *ndl == '\0')
		return ((char *)haystack);
	if (*ndl == '\0')
		return ((char *)haystack + ft_strlen (haystack));
	while (*haystack && n-- > 0)
	{
		needle = (char *)ndl;
		if (*haystack == *needle)
		{
			ret = (char *)haystack;
			while (*haystack == *needle)
			{
				haystack++;
				needle++;
				if (*needle == '\0')
					return (ret);
			}
		}
		haystack++;
	}
	return (NULL);
}
