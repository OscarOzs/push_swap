/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:35:59 by user42            #+#    #+#             */
/*   Updated: 2021/11/29 23:39:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H

nbr_data	*malloc_stack_a(int size, nbr_data *stack_a);
nbr_data	*malloc_stack_b(nbr_data *stack_a, nbr_data *stack_b);
void		free_stack(nbr_data *stack);

#endif