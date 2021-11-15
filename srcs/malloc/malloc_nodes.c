/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:22:20 by user42            #+#    #+#             */
/*   Updated: 2021/11/15 16:24:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*malloc_nodes(int size, nbr_data *node)
{
	node = (nbr_data *)malloc(sizeof(nbr_data) * size);
	if (node == NULL)
		return (NULL);
	return (node);
}