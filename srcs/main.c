/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:51:25 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/01 16:09:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	nbr_data	*stack_a;

	stack_a = NULL;
	if (arg_check(ac, av) == ERROR)
	{
		write(1, "Error\n", 6);
		return (ERROR);
	}
	if (is_arg_sorted(ac, av) == TRUE)
		return (SUCCESS);
	stack_a = set_stack_a(ac - 1, av, stack_a);
	if (stack_a == NULL)
		return (ERROR);
	if (lst_size(stack_a) <= 5)
		stack_a = sort_small_stack(stack_a);
	free_stack(stack_a);
	return (SUCCESS);
}