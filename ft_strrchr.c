/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:08:36 by jlima-so          #+#    #+#             */
/*   Updated: 2025/06/06 13:54:54 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little)
{
	size_t	indl;
	size_t	indb;

	indb = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[indb])
	{
		indl = 0;
		while (big[indb + indl] == little[indl])
		{
			indl++;
			if (little[indl] == '\0')
				return ((char *)big + indb);
		}
		indb++;
	}
	return (NULL);
}
