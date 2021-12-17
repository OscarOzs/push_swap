/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:31:34 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 17:52:30 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	arg_check(int ac, char **av)
{
	if (number_of_arg(ac) == ERROR)
		return (ERROR);
	if (int_overflow_and_is_number(ac, av) == ERROR)
		return (ERROR);
	if (is_duplicate(ac, av) == TRUE)
		return (ERROR);
	return (SUCCESS);
}
