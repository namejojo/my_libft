/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:01:11 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/14 08:31:37 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		ind;
	char	*ret;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	str = (char *)s;
	ret = (char *)ft_calloc(ft_strlen(str) + 1, 1);
	if (ret == NULL)
		return (NULL);
	ind = -1;
	while (str[++ind])
		ret[ind] = f(ind, str[ind]);
	return (ret);
}
