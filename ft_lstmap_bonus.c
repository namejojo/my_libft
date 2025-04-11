/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:29:20 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/11 14:27:57 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	ret = lst;
	while (lst->next != NULL)
	{
		if (lst->content != NULL)
			del(lst->content);
		f (lst->content);
		lst = lst->next;
	}
	return (ret);
}
