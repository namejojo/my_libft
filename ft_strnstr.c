/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:28:40 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/17 11:24:37 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	indl;
	size_t	indb;

	indb = 0;
	while (big[indb] && indb < len)
	{
		indl = 0;
		while (big[indb + indl] == little[indl++] && indb + indl < len)
			if (little[indl] == '\0')
				return ((char *)big + indb);
		indb++;
	}
	return (NULL);
}
