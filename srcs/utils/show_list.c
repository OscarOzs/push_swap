/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:19:35 by user42            #+#    #+#             */
/*   Updated: 2021/11/30 16:25:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	show_list(nbr_data	*lst)
{
	nbr_data	*tmp;

	tmp = lst;
	while (tmp != NULL)
	{
		printf("nbr : %d\n", tmp->nbr);
		printf("pos : %d\n", tmp->nbr_pos);
		printf("\n");
		tmp = tmp->next;
	}
}