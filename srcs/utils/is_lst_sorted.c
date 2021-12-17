/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lst_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:34:13 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:56:08 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	is_lst_sorted(t_nbr_data *lst)
{
	t_nbr_data	*tmp;

	tmp = lst;
	while (tmp->next != NULL)
	{
		if (tmp->nbr > tmp->next->nbr)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}
