/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:35:59 by user42            #+#    #+#             */
/*   Updated: 2021/11/22 18:47:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H

nbr_data	*malloc_nodes(int size, nbr_data *node);
nbr_data	*malloc_stack_b(nbr_data *number, nbr_data *stack_b);
void        free_number_and_stack_b(nbr_data *number, nbr_data *stack_b);

#endif