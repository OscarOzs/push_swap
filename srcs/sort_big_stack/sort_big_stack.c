/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:33:07 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 18:27:05 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(size_t size)
{
	unsigned long	max_nbr;
	int				max_bits;

	max_bits = 0;
	max_nbr = size - 1;
	while ((max_nbr >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

static t_nbr_data	*main_algo(t_nbr_data *stack_a, int max_bits,
size_t size)
{
	t_nbr_data	*stack_b;
	int			i;
	size_t		j;

	i = 0;
	stack_b = NULL;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((stack_a->nbr_pos >> i) & 1) == 1)
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

t_nbr_data	*sort_big_stack(t_nbr_data *stack_a)
{
	size_t			size;
	int				max_bits;

	size = lst_size(stack_a);
	max_bits = get_max_bits(size);
	stack_a = main_algo(stack_a, max_bits, size);
	return (stack_a);
}
