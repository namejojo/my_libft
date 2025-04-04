/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:01:11 by jlima-so          #+#    #+#             */
/*   Updated: 2025/03/25 16:40:07 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		ind;
	char	*ret;
	char	*str;

	str = (char *)s;
	ind = ft_strlen(str);
	ret = (char *)malloc(ind + 1);
	if (ret == NULL)
		return (NULL);
	ret[ind] = '\0';
	ind = -1;
	while (str[++ind])
		ret[ind] = f(ind, str[ind]);
	return (ret);
}
