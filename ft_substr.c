/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 21:22:15 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/17 12:37:43 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	count;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (s_len < start)
		return (ft_calloc(1,1));
	count = -1;
	if (len > s_len - start)
		ret = (char *)ft_calloc(s_len - start + 1, 1);
	else
		ret = (char *)ft_calloc(len + 1, 1);
	if (ret == NULL)
		return (NULL);
	while (++count < len && s[start + count])
		ret[count] = s[start + count];
	return (ret);
}
// int main()
// {
// 	printf("\n ft_substr:\n");

// 	printf("\t%s\n", ft_substr("ola bom dia", 1, 50));
// 	printf("\t%s\n", ft_substr("ola bom dia", 2, 3));
// 	printf("\t%s\n", ft_substr("ola bom dia", 3, 7));
// 	printf("\t%s\n", ft_substr(NULL, ' ', 20));
// 	printf("\t%s\n", ft_substr("ola bom dia", 33, 20));
// 	printf("\t%s\n", ft_substr("ola bom dia",5 , 0));
// }