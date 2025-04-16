/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:28:40 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/16 17:51:56 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	indl;
	size_t	indb;
	size_t	temp;

	indb = 0;
	while (big[indb] && indb < len)
	{
		indl = 0;
		temp = indb;
		while (big[temp++] == little[indl++] && temp < len)
			if (little[indl] == '\0')
				return ((char *)big + indb);
		indb++;
	}
	return (NULL);
}
