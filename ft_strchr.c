/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 19:05:05 by jlima-so          #+#    #+#             */
/*   Updated: 2025/03/24 19:17:02 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;

	if (s == NULL)
		return (NULL);
	temp = (char *)s;
	while (*temp != c && *temp)
		temp++;
	if (*temp == c)
		return (temp);
	return (NULL);
}
