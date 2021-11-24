/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:23 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 20:59:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nbr_data *last_is_top(nbr_data *number)
{
	if (number->next->nbr_pos == 1)
	{
		number = sa(number);
		number = rra(number);
	}
	else if (number->next->nbr_pos == 0)
		number = ra(number);
}

static nbr_data	*middle_is_top(nbr_data *number)
{
	if (number->next->nbr_pos == 0)
		number = sa(number);
	else if (number->next->nbr_pos == 2)
		number = rra(number);
}

static nbr_data	*first_is_top(nbr_data *number)
{
	number = rra(number);
	number = sa(number);
}

nbr_data	*sort_three_numbers(nbr_data *number)
{
	if (number->nbr_pos == 2)
		number = last_is_top(number);
	else if (number->nbr_pos == 1)
		number  = middle_is_top(number);
	else if (number->nbr_pos == 0)
		number = first_is_top(number);
	return (number);
}
