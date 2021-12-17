/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_arg_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:31:54 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:31:56 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	is_arg_sorted(int len, char **arg)
{
	int	i;
	int	j;

	i = 1;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (ft_atol(arg[i]) > ft_atol(arg[j]))
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}