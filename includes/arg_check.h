/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:36:14 by user42            #+#    #+#             */
/*   Updated: 2021/11/15 13:01:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARG_CHECK_H
# define ARG_CHECK_H

t_bool  arg_check(int ac, char **av);
t_bool	number_of_arg(int ac);
t_bool	int_overflow_and_is_number(int len, char **args);
t_bool	is_duplicate(int len, char **args);

#endif