/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:30:37 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:47:57 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

t_nbr_data	*ra(t_nbr_data *stack_a);
t_nbr_data	*pb(t_nbr_data *stack_a, t_nbr_data **stack_b);
t_nbr_data	*rra(t_nbr_data *stack_a);
t_nbr_data	*sa(t_nbr_data *stack_a);
t_nbr_data	*pa(t_nbr_data *stack_a, t_nbr_data **stack_b);

#endif