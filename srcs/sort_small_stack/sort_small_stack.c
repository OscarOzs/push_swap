/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:25:33 by user42            #+#    #+#             */
/*   Updated: 2021/12/01 14:25:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*sort_small_stack(nbr_data *stack_a)
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