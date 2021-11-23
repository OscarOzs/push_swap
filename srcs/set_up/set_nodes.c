/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_nodes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:44:27 by user42            #+#    #+#             */
/*   Updated: 2021/11/23 18:54:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_nodes_and_get_position(int size, nbr_data *node)
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
		node[i].nbr_pos = i;
		i++;
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
	node[i - 1].next = NULL;
}

static void	unsort_nodes(int size, char **arg, nbr_data *node)
{
	nbr_data	tmp;
	int			i;
	int			j;
	int			k;

	i = 1;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (ft_atoi(arg[i]) == node[j].nbr)
			{
				tmp = node[j];
				node[j] = node[k];
				node[k] = tmp;
			}
			j++;
		}
		k++;
		i++;
	}
}

nbr_data	*set_nodes(int size, char **arg, nbr_data *node)
{
	node = malloc_nodes(size, node);
	if (node == NULL)
		return (NULL);
	give_nbr_to_nodes(size, arg, node);
	sort_nodes_and_get_position(size, node);
	unsort_nodes(size, arg, node);
	link_nodes(size, node);
	return (node);
}
