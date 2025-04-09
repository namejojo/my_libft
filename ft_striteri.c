/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:07:18 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/09 22:40:50 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char const *s, void (*f)(unsigned int, char *))
{
	int		ind;
	char	*str;

	str = (char *)s;
	ind = 0;
	while (str[ind])
	{
		f(ind, &str[ind]);
		ind++;
	}
}
