/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_stack_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:33:00 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:53:47 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_nbr(t_nbr_data *stack_a, char **arg)
{
	int			i;
	t_nbr_data	*tmp;

	i = 1;
	tmp = stack_a;
	while (tmp != NULL)
	{
		tmp->nbr = ft_atoi(arg[i]);
		i++;
		tmp = tmp->next;
	}
}

static void	swap_node_data(t_nbr_data *node1, t_nbr_data *node2)
{
	int	tmp;

	tmp = node1->nbr;
	node1->nbr = node2->nbr;
	node2->nbr = tmp;
}

static t_nbr_data	*sort_stack(t_nbr_data *stack)
{
	t_nbr_data	*stack_addr;
	t_nbr_data	*tmp;
	int			i;

	stack_addr = stack;
	i = 0;
	while (stack_addr != NULL)
	{
		tmp = stack_addr->next;
		while (tmp != NULL)
		{
			if (tmp->nbr < stack_addr->nbr)
				swap_node_data(tmp, stack_addr);
			tmp = tmp->next;
		}
		stack_addr->nbr_pos = i;
		i++;
		stack_addr = stack_addr->next;
	}
	return (stack);
}

t_nbr_data	*get_position(t_nbr_data *stack_a, t_nbr_data *stack_a_sorted)
{
	t_nbr_data	*tmp;
	t_nbr_data	*tmp2;

	tmp = stack_a;
	while (tmp != NULL)
	{
		tmp2 = stack_a_sorted;
		while (tmp2 != NULL)
		{
			if (tmp->nbr == tmp2->nbr)
				tmp->nbr_pos = tmp2->nbr_pos;
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (stack_a);
}

t_nbr_data	*set_stack_a(int size, char **arg, t_nbr_data *stack_a)
{
	t_nbr_data	*stack_a_cpy;

	stack_a = malloc_stack(size, stack_a);
	if (stack_a == NULL)
		return (NULL);
	stack_a_cpy = NULL;
	stack_a_cpy = malloc_stack(size, stack_a_cpy);
	if (stack_a_cpy == NULL)
		return (NULL);
	get_nbr(stack_a, arg);
	get_nbr(stack_a_cpy, arg);
	stack_a_cpy = sort_stack(stack_a_cpy);
	stack_a = get_position(stack_a, stack_a_cpy);
	free_stack(stack_a_cpy);
	return (stack_a);
}
