/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:29:44 by user42            #+#    #+#             */
/*   Updated: 2021/11/22 19:12:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_SMALL_STACK_H
# define SORT_SMALL_STACK_H

void	    sort_small_stack(nbr_data *number);
void	    sort_two_numbers(nbr_data *number);
void	    sort_three_numbers(nbr_data *number);
void	    sort_four_numbers(nbr_data *number);
nbr_data	*four_numbers_pb_zero(nbr_data *number, nbr_data *stack_b);

#endif