/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:09:25 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/09 18:59:35 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	ft_nrblrn(int nbr)
{
	int	len;

	len = 1;
	while (-9 > nbr || nbr > 9)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		size;

	size = ft_nrblrn(n);
	if (n >= 0)
		ret = malloc (size + 1);
	else
		ret = malloc (size + 2);
	if (ret == NULL)
		return (NULL);
	ret[size] = '\0';
	if (n < 0)
	{
		ret[0] = '-';
		ret[size] = -(n % 10) + 48;
		n = -(n / 10);
	}
	while (--size >= 0 && ret[size] != '-')
	{
		ret[size] = n % 10 + 48;
		n = n / 10;
	}
	return (ret);
}
