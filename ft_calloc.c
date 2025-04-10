/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 20:58:22 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/10 14:44:48 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	size_t	ind;

	ind = -1;
	if (ind / nmemb >= size)
	{
		if (nmemb == 0 || size == 0)
			return (NULL);
		ret = malloc(size * nmemb);
		ind = 0;
		while (ind <= nmemb * size)
			((char *)ret)[ind++] = '\0';
		return (ret);
	}
	return (NULL);
}
