/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:31:08 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:31:10 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_SMALL_STACK_H
# define SORT_SMALL_STACK_H

nbr_data	*sort_small_stack(nbr_data *stack_a);
nbr_data	*sort_two_numbers(nbr_data *stack_a);
nbr_data	*sort_three_numbers(nbr_data *stack_a);
nbr_data	*sort_four_numbers(nbr_data *stack_a);
nbr_data	*four_numbers_pb_zero(nbr_data *stack_a, nbr_data **stack_b);
nbr_data	*sort_five_numbers(nbr_data *stack_a);
nbr_data	*five_numbers_pb_zero(nbr_data *stack_a, nbr_data **stack_b);
nbr_data	*five_numbers_pb_one(nbr_data *stack_a, nbr_data **stack_b);

#endif