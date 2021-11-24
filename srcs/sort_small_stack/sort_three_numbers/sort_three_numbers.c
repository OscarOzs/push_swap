/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:23 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 17:23:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void last_is_top(nbr_data *number)
{
	if (number->next->nbr_pos == 1)
	{
		number = sa(number);
		number = rra(number);
	}
	else if (number->next->next == 0)
		number = ra(number);
}

static void	middle_is_top(nbr_data *number)
{
	if (number->next->nbr_pos == 0)
		number = sa(number);
	else if (number->next->nbr_pos == 2)
		number = rra(number);
}

static void	first_is_top(nbr_data *number, nbr_data *stack_b)
{
	number = pb(number, stack_b);
	number = sa(number);
	number = pa(number, stack_b);
}

nbr_data	*sort_three_numbers(nbr_data *number)
{
	nbr_data *stack_b;

	stack_b = NULL;
	stack_b = malloc(sizeof(nbr_data) * 1);
	if (stack_b == NULL)
	{
		free_number_and_stack_b(number, stack_b);
		exit(EXIT_FAILURE);
	}
	stack_b->next = NULL;
	if (number->nbr_pos == 2)
		last_is_top(number);
	else if (number->nbr_pos == 1)
		middle_is_top(number);
	else if (number->nbr_pos == 0)
		first_is_top(number, stack_b);
	return (number);
}