/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wroyal <wroyal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:21:01 by wroyal            #+#    #+#             */
/*   Updated: 2021/10/03 16:30:45 by wroyal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_buf_null(char *buf)
{
	buf[0] = '\0';
	buf[1] = '\0';
	buf[2] = '\0';
	buf[3] = '\0';
	buf[4] = '\0';
}

int	main(int argc, char **argv)
{
	t_data	*a_stack;
	t_data	*b_stack;
	int		i;

	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			parser(&a_stack, argv[i]);
			i++;
		}
		ft_index(&a_stack);
		reader(&a_stack, &b_stack);
		if (!ft_is_sort(&a_stack))
			ft_putstr_fd("OK\n", 1);
		else
			ft_putstr_fd("KO\n", 1);
	}
	return (0);
}
