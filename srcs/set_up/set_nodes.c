/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_nodes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:44:27 by user42            #+#    #+#             */
/*   Updated: 2021/11/16 17:27:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_nodes(int size, nbr_data *node)
{
	int tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (node[i].nbr > node[j].nbr)
			{
				tmp = node[i].nbr;
				node[i].nbr = node[j].nbr;
				node[j].nbr = tmp;
			}
			j++;
		}
		i++;
	}
}

static void	get_position(int size, nbr_data *node)
{
	int	i;
	int	pos;

	i = 0;
	pos = 1;
	while (i < size)
	{
		node[i].nbr_pos = pos;
		i++;
		pos++;
	}
}

static void	give_nbr_to_nodes(int size, char **arg, nbr_data *node)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (j < size)
	{
		node[j].nbr = ft_atoi(arg[i]);
		i++;
		j++;
	}
}

static void	link_nodes(int size, nbr_data *node)
{
	int	i;

	i = 0;
	while (i < size)
	{
		node[i].next = &node[i + 1];
		i++;
	}
	node[i].next = NULL;
}

nbr_data	*set_nodes(int size, char **arg, nbr_data *node)
{
	node = malloc_nodes(size, node);
	if (node == NULL)
		return (NULL);
	give_nbr_to_nodes(size, arg, node);
	sort_nodes(size, node);
	get_position(size, node);
	link_nodes(size, node);
	return (node);
}
