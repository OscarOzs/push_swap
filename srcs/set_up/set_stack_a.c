/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stack_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:34:31 by user42            #+#    #+#             */
/*   Updated: 2021/11/29 16:26:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*set_stack_a(int size, char **arg, nbr_data *stack_a)
{
	stack_a = malloc_stack_a(size, stack_a);
	if (stack_a == NULL)
		return (NULL);
	while (stack_a != NULL)
	{
		PRINTD(stack_a->nbr)
		stack_a = stack_a->next;
	}
	exit(1);
	return (stack_a);
}