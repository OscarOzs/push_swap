/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:22:20 by user42            #+#    #+#             */
/*   Updated: 2021/12/06 16:59:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static nbr_data	*malloc_first_node(nbr_data *stack)
{
	stack = (nbr_data *)malloc(sizeof(nbr_data));
	if (stack == NULL)
		return (NULL);
	stack->next = NULL;
	return (stack);
}

nbr_data	*malloc_stack(int size, nbr_data *stack)
{
	int	i;
	nbr_data	*next_node;
	nbr_data	*tmp;

	stack = malloc_first_node(stack);
	if (stack == NULL)
		return (NULL);
	i = 1;
	while (i < size)
	{
		next_node = (nbr_data *)malloc(sizeof(nbr_data));
		if (next_node == NULL)
			return (NULL);
		if (i == 1)
			stack->next = next_node;
		else if (i > 1)
			tmp->next = next_node;
		next_node->next = NULL;
		tmp = next_node;
		next_node = next_node->next;
		i++;
	}
	return (stack);
}