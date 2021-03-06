/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:34:05 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:54:13 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nbr_data	*sort_small_stack(t_nbr_data *stack_a)
{
	if (lst_size(stack_a) == 2)
		stack_a = sort_two_numbers(stack_a);
	else if (lst_size(stack_a) == 3)
		stack_a = sort_three_numbers(stack_a);
	else if (lst_size(stack_a) == 4)
		stack_a = sort_four_numbers(stack_a);
	else if (lst_size(stack_a) == 5)
		stack_a = sort_five_numbers(stack_a);
	return (stack_a);
}
