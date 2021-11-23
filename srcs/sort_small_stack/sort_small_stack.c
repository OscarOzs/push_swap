/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:25:33 by user42            #+#    #+#             */
/*   Updated: 2021/11/23 18:51:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_stack(nbr_data *number)
{
	if (lst_size(number) == 2)
		sort_two_numbers(number);
	else if (lst_size(number) == 3)
		sort_three_numbers(number);
	else if (lst_size(number) == 4)
		sort_four_numbers(number);
}