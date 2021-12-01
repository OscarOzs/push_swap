/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:23 by user42            #+#    #+#             */
/*   Updated: 2021/12/01 15:17:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nbr_data *last_is_top(nbr_data *stack_a)
{
	if (stack_a->next->nbr_pos == 1)
	{
		stack_a = sa(stack_a);
		stack_a = rra(stack_a);
	}
	else if (stack_a->next->nbr_pos == 0)
		stack_a = ra(stack_a);
	return (stack_a);
}

static nbr_data	*middle_is_top(nbr_data *stack_a)
{
	if (stack_a->next->nbr_pos == 0)
		stack_a = sa(stack_a);
	else if (stack_a->next->nbr_pos == 2)
		stack_a = rra(stack_a);
	return (stack_a);
}

static nbr_data	*first_is_top(nbr_data *stack_a)
{
	stack_a = rra(stack_a);
	stack_a = sa(stack_a);
	return (stack_a);
}

nbr_data	*sort_three_numbers(nbr_data *stack_a)
{
	if (stack_a->nbr_pos == 2)
		stack_a = last_is_top(stack_a);
	else if (stack_a->nbr_pos == 1)
		stack_a  = middle_is_top(stack_a);
	else if (stack_a->nbr_pos == 0)
		stack_a = first_is_top(stack_a);
	return (stack_a);
}
