/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_nodes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:44:27 by user42            #+#    #+#             */
/*   Updated: 2021/11/15 16:13:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*set_nodes(int size, char **arg)
{
	nbr_data	*node;

	node = (nbr_data *)malloc(sizeof(nbr_data) * size);
	if (node == NULL)
		return (NULL);
	node[size].next = NULL;
	
}