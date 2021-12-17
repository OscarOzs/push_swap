/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:32:18 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:32:19 by oozsertt         ###   ########.fr       */
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