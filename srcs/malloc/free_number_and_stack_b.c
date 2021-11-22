/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_number_and_stack_b.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:52:01 by user42            #+#    #+#             */
/*   Updated: 2021/11/22 15:52:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_number_and_stack_b(nbr_data *number, nbr_data *stack_b)
{
	free(number);
	free(stack_b);
}