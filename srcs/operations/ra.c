/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:20:40 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 15:43:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*ra(nbr_data *stack_a)
{
	nbr_data	*last_node;
	nbr_data	*first_node;

	if (lst_size(stack_a) < 2)
		return (stack_a);
	last_node = stack_a;
	first_node = stack_a;
	while (last_node->next != NULL)
		last_node = last_node->next;
	stack_a = stack_a->next;
	last_node->next = first_node;
	first_node->next = NULL;
	write(1, "ra\n", 3);
	return (stack_a);
}
