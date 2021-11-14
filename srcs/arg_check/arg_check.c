/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:29:56 by user42            #+#    #+#             */
/*   Updated: 2021/11/14 19:53:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool  arg_check(int ac, char **av)
{
	if (number_of_arg(ac) == ERROR)
		return (ERROR);
	if (int_overflow_and_is_digit(ac, av) == ERROR)
		return (ERROR);
}