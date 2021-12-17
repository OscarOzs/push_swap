/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:31:15 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:48:27 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	show_list(t_nbr_data	*lst);
size_t	lst_size(t_nbr_data *lst);
t_bool	is_lst_sorted(t_nbr_data *lst);
void	swap_nodes(t_nbr_data **node1, t_nbr_data **node2);

#endif