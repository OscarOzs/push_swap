/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:32:18 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:53:20 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_nbr_data	*malloc_first_node(t_nbr_data *stack)
{
	stack = (t_nbr_data *)malloc(sizeof(t_nbr_data));
	if (stack == NULL)
		return (NULL);
	stack->next = NULL;
	return (stack);
}

t_nbr_data	*malloc_stack(int size, t_nbr_data *stack)
{
	int			i;
	t_nbr_data	*next_node;
	t_nbr_data	*tmp;

	stack = malloc_first_node(stack);
	if (stack == NULL)
		return (NULL);
	i = 1;
	while (i < size)
	{
		next_node = (t_nbr_data *)malloc(sizeof(t_nbr_data));
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
