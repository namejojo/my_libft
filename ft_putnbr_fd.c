/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:27:10 by jlima-so          #+#    #+#             */
/*   Updated: 2025/03/25 17:48:04 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (-9 < n && n < 0)
		write (fd, "-", 1);
	if (n < -9 || n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (n > 0)
		n = n % 10 + 48;
	else
		n = -(n % 10) + 48;
	write (fd, &n, 1);
}
