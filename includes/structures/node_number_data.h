/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_number_data.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:32:57 by user42            #+#    #+#             */
/*   Updated: 2021/12/01 15:48:50 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_NUMBER_DATA_H
# define NODE_NUMBER_DATA_H

typedef struct	node_number_data
{
	int						nbr;
	unsigned long long		nbr_pos;
	struct node_number_data	*next;
}				nbr_data;

#endif