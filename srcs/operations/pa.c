/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:32:24 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:49:04 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nbr_data	*pa(t_nbr_data *stack_a, t_nbr_data **stack_b)
{
	t_nbr_data	*tmp;

	if (stack_b == NULL)
		return (stack_a);
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = stack_a;
	stack_a = tmp;
	write(1, "pa\n", 3);
	return (stack_a);
}
