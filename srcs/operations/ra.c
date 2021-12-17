/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:32:33 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:32:35 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*ra(nbr_data *stack_a)
{
	nbr_data	*last_node;
	nbr_data	*tmp;

	if (lst_size(stack_a) < 2)
		return (stack_a);
	last_node = stack_a;
	while (last_node->next != NULL)
		last_node = last_node->next;
	tmp = stack_a;
	stack_a = stack_a->next;
	last_node->next = tmp;
	tmp->next = NULL;
	write(1, "ra\n", 3);
	return (stack_a);
}
