/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:26:06 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/15 15:17:46 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

void adeus(void *content)
{
	write (1, content, 0);
}

int main()
{
	t_list	*bigie;

	bigie = NULL;
	printf("\n");
	printf("%d",ft_lstsize(bigie));	
	ft_lstadd_front(&bigie, ft_lstnew((void*)1));
	printf("\n");
	printf("%d",ft_lstsize(bigie));	
	ft_lstadd_front(&bigie, ft_lstnew((void*)2));
	printf("\n");
	printf("%d", ft_lstsize(bigie));
	ft_lstclear(&bigie, adeus);
	
	printf("\n");
	printf("\n");
	printf("\n");
	t_list	*first;
	t_list	*second;
	t_list	*third;

	second = ft_lstnew("two");
	first = ft_lstnew("one");
	ft_lstadd_front(&second, first);
	printf("in first we have:%s\n", (char *)first->content);
	printf("in second we have:%s\n", (char *)first->next->content);
	third = ft_lstnew("third");
	ft_lstadd_back(&first, third);
	// ft_lstdelone (third, adeus);
	// second->next = NULL;
	
	printf("in we have:%d nodes\n", ft_lstsize(NULL));
	printf("in we have:%d nodes\n", ft_lstsize(first));
	
	ft_lstclear(&first, adeus);
	printf("fucking\n");
	printf("in first we have:%p\n", first);
	// printf("in third we have:%s\n", (char *)ft_lstlast(first)->content);
	// printf("third is in:%p\n", first->next->next->content);
	// ft_lstclear(&first, adeus);
}
