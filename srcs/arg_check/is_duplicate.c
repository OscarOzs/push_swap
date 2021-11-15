/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:55:33 by user42            #+#    #+#             */
/*   Updated: 2021/11/15 13:22:03 by user42           ###   ########.fr       */
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