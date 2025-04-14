/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:08:36 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/14 15:23:09 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		ind;

	temp = (char *)s;
	ind = ft_strlen(temp) + 1;
	while (ind-- > 0)
	{
		if (temp[ind] == (char)c)
			return (temp + ind);
	}
	return (NULL);
}
