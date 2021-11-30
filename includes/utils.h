/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:40:45 by user42            #+#    #+#             */
/*   Updated: 2021/11/30 16:23:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	show_list(nbr_data	*lst);
size_t	lst_size(nbr_data *lst);
t_bool	is_lst_sorted(nbr_data *lst);
void	swap_nodes(nbr_data **node1, nbr_data **node2);

#endif