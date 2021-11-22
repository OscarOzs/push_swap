/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:20:23 by user42            #+#    #+#             */
/*   Updated: 2021/11/22 15:10:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void last_is_top(nbr_data *number)
{
	if (number[1].nbr_pos == 1)
	{
		ft_putstr("sa\n");
		ft_putstr("rra\n");
	}
	else if (number[1].nbr_pos == 0)
		ft_putstr("ra\n");
}

static void	middle_is_top(nbr_data *number)
{
	if (number[1].nbr_pos == 0)
		ft_putstr("sa\n");
	else if (number[1].nbr_pos == 2)
		ft_putstr("rra\n");
}

static void	first_is_top()
{
	ft_putstr("pb\n");
	ft_putstr("sa\n");
	ft_putstr("pa\n");
}

void	sort_three_numbers(nbr_data *number)
{
	if (number[0].nbr_pos == 2)
		last_is_top(number);
	else if (number[0].nbr_pos == 1)
		middle_is_top(number);
	else if (number[0].nbr_pos == 0)
		first_is_top();
}