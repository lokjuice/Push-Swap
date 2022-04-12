/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wroyal <wroyal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:23:42 by wroyal            #+#    #+#             */
/*   Updated: 2021/10/03 16:29:52 by wroyal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (!ft_is_sort(&a_stack))
			exit(0);
		sequence(&a_stack);
		sort_boll_1(&a_stack);
		ft_algo(&a_stack, &b_stack);
	}
	return (0);
}
