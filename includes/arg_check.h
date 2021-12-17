/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:30:06 by oozsertt          #+#    #+#             */
/*   Updated: 2021/12/17 14:30:09 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARG_CHECK_H
# define ARG_CHECK_H

t_bool  arg_check(int ac, char **av);
t_bool	number_of_arg(int ac);
t_bool	int_overflow_and_is_number(int len, char **args);
t_bool	is_duplicate(int len, char **args);
t_bool	is_arg_sorted(int len, char **arg);

#endif