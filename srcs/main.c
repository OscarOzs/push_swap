/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:51:25 by oozsertt          #+#    #+#             */
/*   Updated: 2021/11/24 16:31:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	nbr_data	*number;

	number = NULL;
	if (arg_check(ac, av) == ERROR)
	{
		write(1, "Error\n", 8);
		return (ERROR);
	}
	if (is_arg_sorted(ac, av) == TRUE)
		return (SUCCESS);
	number = set_nodes(ac - 1, av, number);
	if (number == NULL)
	{
		free(number);
		return (ERROR);
	}
	if (lst_size(number) <= 5)
		number = sort_small_stack(number);
}