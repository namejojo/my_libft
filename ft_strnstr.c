/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:28:40 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/10 18:59:02 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *ndl, int n)
{
	char	*needle;
	char	*hst;
	char	*ret;

	needle = (char *)ndl;
	hst = (char *)haystack;
	while (*hst && n-- > 0)
	{
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
			needle = (char *)ndl;
		}
		hst++;
	}
	return (NULL);
}
