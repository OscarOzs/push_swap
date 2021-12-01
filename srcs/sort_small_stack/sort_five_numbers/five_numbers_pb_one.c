/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_numbers_pb_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:42:39 by user42            #+#    #+#             */
/*   Updated: 2021/12/01 14:43:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nbr_data	*one_is_first(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

static nbr_data	*one_is_second(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = ra(stack_a);
	if (is_lst_sorted(stack_a) == TRUE)
		return (stack_a);
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

static nbr_data	*one_is_third(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = ra(stack_a);
	stack_a = ra(stack_a);
	if (is_lst_sorted(stack_a) == TRUE)
		return (stack_a);
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

static nbr_data	*one_is_last(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = rra(stack_a);
	if (is_lst_sorted(stack_a) == TRUE)
		return (stack_a);
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

nbr_data	*five_numbers_pb_one(nbr_data *stack_a, nbr_data **stack_b)
{
	if (stack_a->nbr_pos == 1)
		stack_a = one_is_first(stack_a, stack_b);
	else if (stack_a->next->nbr_pos == 1)
		stack_a = one_is_second(stack_a, stack_b);
	else if (stack_a->next->next->nbr_pos == 1)
		stack_a = one_is_third(stack_a, stack_b);
	else
		stack_a = one_is_last(stack_a, stack_b);
	return (stack_a);
}
