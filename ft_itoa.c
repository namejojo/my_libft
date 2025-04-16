/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:09:25 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/16 19:35:40 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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
		ret = ft_calloc (size + 1, 1);
	else
		ret = ft_calloc (size + 2, 1);
	if (ret == NULL)
		return (NULL);
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
