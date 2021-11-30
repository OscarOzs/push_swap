/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_numbers_pb_zero.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:32:30 by user42            #+#    #+#             */
/*   Updated: 2021/11/30 16:53:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nbr_data	*zero_is_first(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

static nbr_data	*zero_is_second(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = ra(stack_a);
	if (is_lst_sorted(stack_a) == TRUE)
		return (stack_a);
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

nbr_data	*zero_is_third(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = ra(stack_a);
	stack_a = ra(stack_a);
	if (is_lst_sorted(stack_a) == TRUE)
		return (stack_a);
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

nbr_data	*zero_is_last(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = rra(stack_a);
	if (is_lst_sorted(stack_a) == TRUE)
		return (stack_a);
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

nbr_data	*four_numbers_pb_zero(nbr_data *stack_a, nbr_data **stack_b)
{
	if (stack_a->nbr_pos == 0)
		stack_a = zero_is_first(stack_a, stack_b);
	else if (stack_a->next->nbr_pos == 0)
		stack_a = zero_is_second(stack_a, stack_b);
	else if (stack_a->next->next->nbr_pos == 0)
		stack_a = zero_is_third(stack_a, stack_b);
	else
		stack_a = zero_is_last(stack_a, stack_b);
	return (stack_a);
}
