/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_overflow_and_is_digit.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:43:29 by user42            #+#    #+#             */
/*   Updated: 2021/11/14 20:07:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_bool	is_number(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[0] == '-')
			i++;
		if (ft_isdigit(arg[i]) == FALSE)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

static t_bool	is_int_overflow(char *arg)
{
	long	number;

	number = ft_atol(arg);
	printf("%ld\n", number);
	if (number > 2147483647 || number < -2147483648)
		return (ERROR);
}

t_bool	int_overflow_and_is_digit(int len, char **args)
{
	int	i;

	i = 1;
	while (i < len)
	{
		if (is_number(args[i]) == FALSE)
			return (ERROR);
		if (is_int_overflow(args[i]) == TRUE)
			return (ERROR);
		i++;
	}
}