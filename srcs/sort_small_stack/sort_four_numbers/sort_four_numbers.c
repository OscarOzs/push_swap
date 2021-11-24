/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:05:39 by user42            #+#    #+#             */
/*   Updated: 2021/11/24 15:03:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four_numbers(nbr_data *number)
{
	nbr_data *stack_b;

	stack_b = NULL;
	stack_b = malloc(sizeof(nbr_data) * 1);
	if (stack_b == NULL)
	{
		free_number_and_stack_b(number, stack_b);
		exit(EXIT_FAILURE);
	}
	stack_b->next = NULL;
	//
	nbr_data *tmp;
	tmp = number;
	while (tmp != NULL)
	{
		PRINTD(tmp->nbr)
		tmp = tmp->next;
	}
	printf("\n");
	number = four_numbers_pb_zero(number, stack_b);
	printf("\n");
	tmp = number;
	while (tmp != NULL)
	{
		PRINTD(tmp->nbr)
		tmp = tmp->next;
	}
	printf("stack b : %d\n", stack_b->nbr);
}
