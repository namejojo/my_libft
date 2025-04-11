/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:28:40 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/11 19:25:20 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *ndl, int n)
{
	char	*needle;
	char	*hst;
	char	*ret;

	hst = (char *)haystack;
	if (*hst == '\0' && *ndl == '\0')
		return (hst);
	while (*hst && n-- > 0)
	{
		needle = (char *)ndl;
		if (*hst == *needle)
		{
			ret = hst;
			while (*hst == *needle)
			{
				hst++;
				needle++;
				if (*needle == '\0')
					return (ret);
			}
		}
		hst++;
	}
	return (NULL);
}
