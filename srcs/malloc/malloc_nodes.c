/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:22:20 by user42            #+#    #+#             */
/*   Updated: 2021/11/22 17:23:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*malloc_nodes(int size, nbr_data *node)
{
	node = (nbr_data *)malloc(sizeof(nbr_data) * (size + 1));
	if (node == NULL)
		return (NULL);
	node[size].next = NULL;
	return (node);
}