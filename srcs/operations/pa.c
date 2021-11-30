/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:01:50 by user42            #+#    #+#             */
/*   Updated: 2021/11/30 16:43:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*pa(nbr_data *stack_a, nbr_data **stack_b)
{
	nbr_data	*tmp;

	if (stack_b == NULL)
		return (stack_a);
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = stack_a;
	stack_a = tmp;
	write(1, "pa\n", 3);
	return (stack_a);
}
