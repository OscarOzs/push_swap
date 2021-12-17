/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:32:24 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:32:26 by oozsertt         ###   ########.fr       */
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
