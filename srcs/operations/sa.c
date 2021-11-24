/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:34:57 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 20:37:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*sa(nbr_data *stack_a)
{
	nbr_data	*tmp;

	if (lst_size(stack_a) < 2)
		return (stack_a);
	tmp = stack_a;
	stack_a = stack_a->next;
	tmp->next = stack_a->next;
	stack_a->next = tmp;
	write (1, "sa\n", 3);
	return (stack_a);
}
