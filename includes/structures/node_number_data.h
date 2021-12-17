/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_number_data.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:29:28 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:47:03 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_NUMBER_DATA_H
# define NODE_NUMBER_DATA_H

typedef struct node_number_data
{
	int						nbr;
	unsigned long			nbr_pos;
	struct node_number_data	*next;
}				t_nbr_data;

#endif