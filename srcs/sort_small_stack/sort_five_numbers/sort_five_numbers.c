/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:33:31 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 18:34:39 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_nbr_data	*last_is_top(t_nbr_data *stack_a)
{
	if (stack_a->next->nbr_pos == 3)
	{
		stack_a = sa(stack_a);
		stack_a = rra(stack_a);
	}
	else if (stack_a->next->nbr_pos == 2)
		stack_a = ra(stack_a);
	return (stack_a);
}

static t_nbr_data	*middle_is_top(t_nbr_data *stack_a)
{
	if (stack_a->next->nbr_pos == 2)
		stack_a = sa(stack_a);
	else if (stack_a->next->nbr_pos == 4)
		stack_a = rra(stack_a);
	return (stack_a);
}

static t_nbr_data	*first_is_top(t_nbr_data *stack_a)
{
	stack_a = rra(stack_a);
	stack_a = sa(stack_a);
	return (stack_a);
}

static t_nbr_data	*sort_three_numbers_left(t_nbr_data *stack_a)
{
	if (stack_a->nbr_pos == 4)
		stack_a = last_is_top(stack_a);
	else if (stack_a->nbr_pos == 3)
		stack_a = middle_is_top(stack_a);
	else if (stack_a->nbr_pos == 2)
		stack_a = first_is_top(stack_a);
	return (stack_a);
}

t_nbr_data	*sort_five_numbers(t_nbr_data *stack_a)
{
	t_nbr_data	*stack_b;

	stack_b = NULL;
	stack_a = five_numbers_pb_zero(stack_a, &stack_b);
	if (is_lst_sorted(stack_a) == TRUE && lst_size(stack_a) == 5)
		return (stack_a);
	stack_a = five_numbers_pb_one(stack_a, &stack_b);
	if (is_lst_sorted(stack_a) == TRUE && lst_size(stack_a) == 5)
		return (stack_a);
	stack_a = sort_three_numbers_left(stack_a);
	stack_a = pa(stack_a, &stack_b);
	if (lst_size(stack_b) == 1)
		stack_a = pa(stack_a, &stack_b);
	return (stack_a);
}
