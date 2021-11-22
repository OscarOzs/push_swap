/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:05:39 by user42            #+#    #+#             */
/*   Updated: 2021/11/22 17:39:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four_numbers(nbr_data *number)
{
	nbr_data *stack_b;

	stack_b = NULL;
	stack_b = malloc_stack_b(number, stack_b);
	if (stack_b == NULL)
	{
		free_number_and_stack_b(number, stack_b);
		exit(EXIT_FAILURE);
	}
	four_numbers_pb_zero(number, stack_b);
	
}
