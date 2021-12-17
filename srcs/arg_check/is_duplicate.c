/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:32:01 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:52:44 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	is_duplicate(int len, char **args)
{
	int	i;
	int	j;

	i = 1;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_atol(args[i]) == ft_atol(args[j]))
				return (TRUE);
			j++;
		}
		i++;
	}
	return (FALSE);
}
