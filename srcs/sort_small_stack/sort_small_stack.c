/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:25:33 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 20:42:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

nbr_data	*sort_small_stack(nbr_data *number)
{
	nbr_data *tmp;

	tmp = number;
	while (tmp != NULL)
	{
		PRINTD(tmp->nbr)
		tmp = tmp->next;
	}
	PRINTC('\n')
	if (lst_size(number) == 2)
		number = sort_two_numbers(number);
	else if (lst_size(number) == 3)
		number = sort_three_numbers(number); //
	else if (lst_size(number) == 4)
		number = sort_four_numbers(number);
	PRINTC('\n')
	tmp = number;
	while (tmp != NULL)
	{
		PRINTD(tmp->nbr)
		tmp = tmp->next;
	}
}