/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:32:29 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:49:10 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nbr_data	*pb(t_nbr_data *stack_a, t_nbr_data **stack_b)
{
	t_nbr_data	*tmp;

	if (stack_a == NULL)
		return (stack_a);
	tmp = stack_a;
	stack_a = stack_a->next;
	if ((*stack_b) == NULL)
	{
		*stack_b = tmp;
		(*stack_b)->next = NULL;
	}
	else
	{
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
	write(1, "pb\n", 3);
	return (stack_a);
}
