/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:34:57 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 18:51:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*sa(nbr_data *stack_a)
{
	nbr_data	*second_node;

	if (lst_size(stack_a) < 2)
		return (stack_a);
	second_node = stack_a->next;
	second_node->next = stack_a;
	stack_a->next = NULL;
	stack_a = second_node;
	write (1, "sa\n", 3);
	return (stack_a);
}
