/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:05:39 by user42            #+#    #+#             */
/*   Updated: 2021/11/26 14:46:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nbr_data	*last_is_top(nbr_data *number)
{
	if (number->next->nbr_pos == 2)
	{
		number = sa(number);
		number = rra(number);
	}
	else if (number->next->nbr_pos == 1)
		number = ra(number);
	return (number);
}

static nbr_data	*middle_is_top(nbr_data *number)
{
	if (number->next->nbr_pos == 1)
		number = sa(number);
	else if (number->next->nbr_pos == 3)
		number = rra(number);
	return (number);
}

static nbr_data	*first_is_top(nbr_data *number)
{
	number = rra(number);
	number = sa(number);
	return (number);
}

static nbr_data	*sort_three_numbers_left(nbr_data *number)
{
	if (number->nbr_pos == 3)
		number = last_is_top(number);
	else if (number->nbr_pos == 2)
		number = middle_is_top(number);
	else if (number->nbr_pos == 1)
		number = first_is_top(number);
	return (number);
}

nbr_data	*sort_four_numbers(nbr_data *number)
{
	nbr_data *stack_b;

	stack_b = NULL;
	number = four_numbers_pb_zero(number, &stack_b);
	if (is_lst_sorted(number) == TRUE && stack_b == NULL)
		return (number);
	number = sort_three_numbers_left(number);
	number = pa(number, &stack_b);
	free(stack_b);
	return (number);
}
