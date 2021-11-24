/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_stack_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:34:09 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 21:45:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*malloc_stack_b(nbr_data *number, nbr_data *stack_b)
{
	size_t	size;

	size = lst_size(number);
	stack_b = (nbr_data *)malloc(sizeof(nbr_data) * (size + 1));
	if (stack_b == NULL)
		return (NULL);
	stack_b[size].next = NULL;
	return (stack_b);
}