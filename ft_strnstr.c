/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:28:40 by jlima-so          #+#    #+#             */
/*   Updated: 2025/06/06 13:53:19 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	indl;
	size_t	indb;

	indb = 0;
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[indb] && indb < len)
	{
		indl = 0;
		while (big[indb + indl] == little[indl] && indb + indl < len)
		{
			indl++;
			if (little[indl] == '\0')
				return ((char *)big + indb);
		}
		indb++;
	}
	return (NULL);
}
// 5 8 10 12
// /* 5 */ check(ft_strnstr(empty, "", -1) == empty); showLeaks();
// /* 8 */ check(ft_strnstr(haystack, "aaabc", 5) == haystack); showLeaks();
// /* 10 */ check(ft_strnstr(haystack, "abcd", 9) == haystack + 5); showLeaks();
// /* 12 mbueno-g */ check(ft_strnstr(haystack, "a", 1) == haystack); showLeaks();
