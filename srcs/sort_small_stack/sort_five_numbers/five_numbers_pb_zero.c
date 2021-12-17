/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_numbers_pb_zero.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:33:26 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:33:28 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nbr_data	*zero_is_second(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = ra(stack_a);
	if (is_lst_sorted(stack_a) == TRUE)
		return (stack_a);
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

static nbr_data	*zero_is_third(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = ra(stack_a);
	stack_a = ra(stack_a);
	if (is_lst_sorted(stack_a) == TRUE)
		return (stack_a);
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

static nbr_data	*zero_is_fourth(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = rra(stack_a);
	stack_a = rra(stack_a);
	if (is_lst_sorted(stack_a) == TRUE)
		return (stack_a);
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

static nbr_data	*zero_is_last(nbr_data *stack_a, nbr_data **stack_b)
{
	stack_a = rra(stack_a);
	if (is_lst_sorted(stack_a) == TRUE)
		return (stack_a);
	stack_a = pb(stack_a, stack_b);
	return (stack_a);
}

nbr_data	*five_numbers_pb_zero(nbr_data *stack_a, nbr_data **stack_b)
{
	if (stack_a->nbr_pos == 0)
		stack_a = pb(stack_a, stack_b);
	else if (stack_a->next->nbr_pos == 0)
		stack_a = zero_is_second(stack_a, stack_b);
	else if (stack_a->next->next->nbr_pos == 0)
		stack_a = zero_is_third(stack_a, stack_b);
	else if (stack_a->next->next->next->nbr_pos == 0)
		stack_a = zero_is_fourth(stack_a, stack_b);
	else
		stack_a = zero_is_last(stack_a, stack_b);
	return (stack_a);
}
