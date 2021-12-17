/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_of_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:32:06 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 18:52:01 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	number_of_arg(int ac)
{
	if (ac == 1)
		exit(EXIT_FAILURE);
	else if (ac < 3)
		return (ERROR);
	return (SUCCESS);
}
