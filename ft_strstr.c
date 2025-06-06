/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:53:06 by jlima-so          #+#    #+#             */
/*   Updated: 2025/06/06 13:53:08 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_matrix(char **matrix)
{
	int	indv;
	int	indh;

	indv = -1;
	while (matrix[++indv])
	{
		indh = -1;
		while (matrix[indv][++indh])
			write(1, &matrix[indv][indh], 1);
		write(1, "\n", 1);
	}
}
