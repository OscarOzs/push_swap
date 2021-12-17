/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:31:15 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:31:17 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	show_list(nbr_data	*lst);
size_t	lst_size(nbr_data *lst);
t_bool	is_lst_sorted(nbr_data *lst);
void	swap_nodes(nbr_data **node1, nbr_data **node2);

#endif