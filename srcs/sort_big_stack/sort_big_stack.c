/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:05:15 by user42            #+#    #+#             */
/*   Updated: 2021/12/03 17:30:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*sort_big_stack(nbr_data *stack_a)
{
	nbr_data		*stack_b;
	size_t			size;
	unsigned long	max_nbr;
	int				max_bits;
	int				i;
	size_t			j;

	size = lst_size(stack_a);
	max_nbr = size - 1;
	max_bits = 0;
	while ((max_nbr >> max_bits) != 0)
		max_bits++;
	i = 0;
	stack_b = NULL;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((stack_a->nbr_pos >> i)&1) == 1)
				stack_a = ra(stack_a);
			else
				stack_a = pb(stack_a, &stack_b);
			j++;
		}
		while (stack_b != NULL)
			stack_a = pa(stack_a, &stack_b);
		i++;
	}
	return (stack_a);
}