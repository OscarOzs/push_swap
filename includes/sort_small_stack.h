/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:31:08 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:48:21 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_SMALL_STACK_H
# define SORT_SMALL_STACK_H

t_nbr_data	*sort_small_stack(t_nbr_data *stack_a);
t_nbr_data	*sort_two_numbers(t_nbr_data *stack_a);
t_nbr_data	*sort_three_numbers(t_nbr_data *stack_a);
t_nbr_data	*sort_four_numbers(t_nbr_data *stack_a);
t_nbr_data	*four_numbers_pb_zero(t_nbr_data *stack_a, t_nbr_data **stack_b);
t_nbr_data	*sort_five_numbers(t_nbr_data *stack_a);
t_nbr_data	*five_numbers_pb_zero(t_nbr_data *stack_a, t_nbr_data **stack_b);
t_nbr_data	*five_numbers_pb_one(t_nbr_data *stack_a, t_nbr_data **stack_b);

#endif