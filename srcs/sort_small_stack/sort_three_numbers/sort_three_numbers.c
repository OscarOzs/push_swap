/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:33:50 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:55:25 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_nbr_data	*last_is_top(t_nbr_data *stack_a)
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

static t_nbr_data	*middle_is_top(t_nbr_data *stack_a)
{
	if (stack_a->next->nbr_pos == 0)
		stack_a = sa(stack_a);
	else if (stack_a->next->nbr_pos == 2)
		stack_a = rra(stack_a);
	return (stack_a);
}

static t_nbr_data	*first_is_top(t_nbr_data *stack_a)
{
	stack_a = rra(stack_a);
	stack_a = sa(stack_a);
	return (stack_a);
}

t_nbr_data	*sort_three_numbers(t_nbr_data *stack_a)
{
	if (stack_a->nbr_pos == 2)
		stack_a = last_is_top(stack_a);
	else if (stack_a->nbr_pos == 1)
		stack_a = middle_is_top(stack_a);
	else if (stack_a->nbr_pos == 0)
		stack_a = first_is_top(stack_a);
	return (stack_a);
}
