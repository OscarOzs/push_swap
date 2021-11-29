/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:22:20 by user42            #+#    #+#             */
/*   Updated: 2021/11/29 16:33:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nbr_data	*malloc_first_node(nbr_data *stack_a)
{
	stack_a = (nbr_data	*)malloc(sizeof(nbr_data));
	if (stack_a == NULL)
		return (NULL);
	stack_a->next = NULL;
	return (stack_a);
}

nbr_data	*malloc_stack_a(int size, nbr_data *stack_a)
{
	int	i;
	nbr_data	*next_node;
	nbr_data	*tmp;

	stack_a = malloc_first_node(stack_a);
	if (stack_a == NULL)
		return (NULL);
	i = 1;
	while (i < size)
	{
		next_node = (nbr_data *)malloc(sizeof(nbr_data));
		if (next_node == NULL)
			return (NULL);
		if (i == 1)
			stack_a->next = next_node;
		else if (i > 1)
			tmp->next = next_node;
		tmp = next_node;
		next_node = next_node->next;
		i++;
	}
	return (stack_a);
}