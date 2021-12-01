/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lst_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:01:31 by user42            #+#    #+#             */
/*   Updated: 2021/12/01 15:18:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool  is_lst_sorted(nbr_data *lst)
{
	nbr_data    *tmp;

	tmp = lst;
	while (tmp->next != NULL)
	{
		if (tmp->nbr > tmp->next->nbr)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}
