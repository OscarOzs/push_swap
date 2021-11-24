/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:32:16 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 22:46:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*pb(nbr_data *stack_a, nbr_data *stack_b)
{
	nbr_data	*tmp;

	if (stack_a == NULL)
		return (stack_a);
	tmp = stack_a;
	stack_a = stack_a->next;
	tmp->next = stack_b;
	stack_b = tmp;
	write(1, "pb\n", 3);
	return (stack_a);
}