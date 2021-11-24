/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:20:48 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 15:43:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*rra(nbr_data *stack_a)
{
	nbr_data	*last_node;
	nbr_data	*before_last_node;

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
