/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:01:50 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 17:08:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*pa(nbr_data *stack_a, nbr_data *stack_b)
{
	nbr_data	*first_new_node;

	if (stack_a == NULL)
		return (stack_a);
	first_new_node = stack_b;
	first_new_node->next = stack_a;
	stack_a = first_new_node;
	stack_b = NULL;
	write(1, "pa\n", 3);
	return (stack_a);
}