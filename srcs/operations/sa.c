/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:34:57 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 16:41:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*sa(nbr_data *stack_a)
{
	nbr_data	*second_node;
	nbr_data	*tmp;

	if (lst_size(sa) < 2)
		return (stack_a);
	tmp = stack_a;
	tmp->nbr = second_node->nbr;
	tmp->nbr_pos = second_node->nbr_pos;
	second_node->nbr = stack_a->nbr;
	second_node->nbr_pos = stack_a->nbr_pos;
	stack_a = tmp;
	write (1, "sa\n", 3);
	return (stack_a);
}
