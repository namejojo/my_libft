/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:21:27 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/15 14:41:27 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*temp;
	int			count;
	int			sub_count;

	count = ft_lstsize (*lst);
	while (count-- > 0)
	{
		temp = *lst;
		sub_count = count;
		while (sub_count-- > 0)
			temp = temp->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}
