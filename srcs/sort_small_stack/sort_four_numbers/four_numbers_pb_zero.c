/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_numbers_pb_zero.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:32:30 by user42            #+#    #+#             */
/*   Updated: 2021/11/26 14:40:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nbr_data	*zero_is_first(nbr_data *number, nbr_data **stack_b)
{
	*stack_b = (nbr_data *)malloc(sizeof(nbr_data) * 1);
	if (stack_b == NULL)
	{
		free_number_and_stack_b(number, *stack_b);
		exit(EXIT_FAILURE);
	}
	number = pb(number, stack_b);
	return (number);
}

static nbr_data	*zero_is_second(nbr_data *number, nbr_data **stack_b)
{
	number = ra(number);
	if (is_lst_sorted(number) == TRUE)
		return (number);
	*stack_b = (nbr_data *)malloc(sizeof(nbr_data) * 1);
	if (stack_b == NULL)
	{
		free_number_and_stack_b(number, *stack_b);
		exit(EXIT_FAILURE);
	}
	number = pb(number, stack_b);
	return (number);
}

nbr_data	*zero_is_third(nbr_data *number, nbr_data **stack_b)
{
	number = ra(number);
	number = ra(number);
	if (is_lst_sorted(number) == TRUE)
		return (number);
	*stack_b = (nbr_data *)malloc(sizeof(nbr_data) * 1);
	if (stack_b == NULL)
	{
		free_number_and_stack_b(number, *stack_b);
		exit(EXIT_FAILURE);
	}
	number = pb(number, stack_b);
	return (number);
}

nbr_data	*zero_is_last(nbr_data *number, nbr_data **stack_b)
{
	number = rra(number);
	if (is_lst_sorted(number) == TRUE)
		return (number);
	*stack_b = (nbr_data *)malloc(sizeof(nbr_data) * 1);
	if (stack_b == NULL)
	{
		free_number_and_stack_b(number, *stack_b);
		exit(EXIT_FAILURE);
	}
	number = pb(number, stack_b);
	return (number);
}

nbr_data	*four_numbers_pb_zero(nbr_data *number, nbr_data **stack_b)
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
		else if (tmp->nbr_pos == 0 && i == 2)
			number = zero_is_third(number, stack_b);
		else if (tmp->nbr_pos == 0 && i == 3)
			number = zero_is_last(number, stack_b);
		i++;
		tmp = tmp->next;
	}
	return (number);
}
