/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_numbers_pb_zero.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:32:30 by user42            #+#    #+#             */
/*   Updated: 2021/11/22 20:29:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nbr_data	*zero_is_first(nbr_data *number, nbr_data *stack_b)
{
	write(1, "pb\n", 3);
	stack_b->nbr = number->nbr;
	stack_b->nbr_pos = number->nbr_pos;
	number = number->next;
	return (number);
}

static nbr_data	*zero_is_second(nbr_data *number, nbr_data *stack_b)
{
	nbr_data	*tmp;

	write(1, "ra\n", 3);
	write(1, "pb\n", 3);
	stack_b->nbr = number->nbr;
	stack_b->nbr_pos = number->nbr_pos;

	
	tmp = number;
	while (tmp->next != NULL)
		tmp = tmp->next;
	number = number->next;
	
	tmp->next = number;
	number->next = NULL;
	return (number);
}

nbr_data	*four_numbers_pb_zero(nbr_data *number, nbr_data *stack_b)
{
	int			i;
	nbr_data	*tmp;

	tmp = number;
	i = 0;
	while (tmp != NULL)
	{
		if (tmp->nbr_pos == 0 && i == 0)
			number = zero_is_first(number, stack_b);
		else if (tmp->nbr_pos == 0 && i == 1)
			number = zero_is_second(number, stack_b);
		i++;
		tmp = tmp->next;
	}
	return (number);
}
