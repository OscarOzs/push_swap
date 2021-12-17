/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:32:52 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:32:54 by oozsertt         ###   ########.fr       */
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
