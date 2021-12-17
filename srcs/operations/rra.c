/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:32:42 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:49:19 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_nbr_data	*rra(t_nbr_data *stack_a)
{
	t_nbr_data	*last_node;
	t_nbr_data	*before_last_node;

	if (lst_size(stack_a) < 2)
		return (stack_a);
	before_last_node = stack_a;
	while (before_last_node->next->next != NULL)
		before_last_node = before_last_node->next;
	last_node = stack_a;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = stack_a;
	before_last_node->next = NULL;
	stack_a = last_node;
	write(1, "rra\n", 4);
	return (stack_a);
}
